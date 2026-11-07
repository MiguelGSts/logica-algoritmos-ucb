# Aula 10: Operação Placar

Arquivos iniciais da prática autoinstrucional de Lógica de Programação e Algoritmos, em linguagem C.

## Arquivos

- `placar_dinamico.c`: base funcional para a Missão 1 e pontos de implementação da Missão 2.
- `participante.c`: estrutura inicial para a Missão 3.
- `auditoria_memoria.c`: casos A a D para análise textual da Missão 4. Os trechos defeituosos estão isolados e não devem ser executados.

## Como compilar

No terminal, dentro da pasta onde estão os arquivos:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic placar_dinamico.c -o placar
gcc -std=c11 -Wall -Wextra -Wpedantic participante.c -o participante
gcc -std=c11 -Wall -Wextra -Wpedantic auditoria_memoria.c -o auditoria
```

No Windows com PowerShell, pode ser necessário executar `./placar.exe` ou `.\placar.exe`. Em Linux ou Git Bash, use `./placar`.

**Atenção:** compilar e executar os arquivos iniciais não significa ter concluído todas as missões. A conclusão exige as alterações indicadas na prática e a verificação dos resultados esperados.
