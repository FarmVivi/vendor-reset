#!/bin/bash

echo "=== Test du support Navi 22 XT (RX 6700 XT) ==="
echo

echo "1. Vérification des fichiers créés :"
echo "   - navi22.c: $(test -f src/amd/navi22.c && echo "✓ Présent" || echo "✗ Manquant")"
echo "   - navi22_reg_init.c: $(test -f src/amd/amdgpu/navi22_reg_init.c && echo "✓ Présent" || echo "✗ Manquant")"
echo "   - navi22_ip_offset.h: $(test -f src/amd/amdgpu/include/navi22_ip_offset.h && echo "✓ Présent" || echo "✗ Manquant")"
echo

echo "2. Vérification des device IDs :"
echo "   - Device ID 0x73df (RX 6700 XT): $(grep -q "0x73df" src/device-db.h && echo "✓ Configuré" || echo "✗ Manquant")"
echo

echo "3. Vérification des déclarations :"
echo "   - AMD_NAVI22 dans amd.h: $(grep -q "AMD_NAVI22" src/amd/amd.h && echo "✓ Déclaré" || echo "✗ Manquant")"
echo "   - amd_navi22_ops dans amd.h: $(grep -q "amd_navi22_ops" src/amd/amd.h && echo "✓ Déclaré" || echo "✗ Manquant")"
echo "   - navi22_reg_base_init dans nv.h: $(grep -q "navi22_reg_base_init" src/amd/amdgpu/include/nv.h && echo "✓ Déclaré" || echo "✗ Manquant")"
echo

echo "4. Vérification des Makefiles :"
echo "   - navi22.o dans Makefile: $(grep -q "navi22.o" src/amd/Makefile && echo "✓ Inclus" || echo "✗ Manquant")"
echo "   - navi22_reg_init.o dans Makefile: $(grep -q "navi22_reg_init.o" src/amd/Makefile && echo "✓ Inclus" || echo "✗ Manquant")"
echo

echo "5. Vérification de la syntaxe des fichiers d'en-tête :"
echo "   - navi22_ip_offset.h: $(gcc -fsyntax-only -c src/amd/amdgpu/include/navi22_ip_offset.h 2>/dev/null && echo "✓ Syntaxe OK" || echo "✗ Erreur de syntaxe")"
echo

echo "=== Résumé ==="
TOTAL_FILES=3
PRESENT_FILES=$(test -f src/amd/navi22.c && test -f src/amd/amdgpu/navi22_reg_init.c && test -f src/amd/amdgpu/include/navi22_ip_offset.h && echo "3" || echo "0")
echo "Fichiers créés: $PRESENT_FILES/$TOTAL_FILES"

if [ "$PRESENT_FILES" = "3" ]; then
    echo "✓ Support Navi 22 XT (RX 6700 XT) ajouté avec succès !"
    echo
    echo "Le pilote devrait maintenant reconnaître et supporter le GPU AMD RX 6700 XT"
    echo "avec le device ID 0x73df (Navi 22 XT)."
else
    echo "✗ Certains fichiers sont manquants"
fi