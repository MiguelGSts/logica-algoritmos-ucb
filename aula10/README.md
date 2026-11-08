# Aula 10: Operação Placar

Arquivos iniciais da prática autoinstrucional de Lógica de Programação e Algoritmos, em linguagem C.

## 📌Sobre

Algoritmos em linguagem C destinados a aprendizagem de **alocação e realocação de memória dinâmica** e uso de `structs` em âmbito instituicional. Todos as aplicações tiveram suas bases contruídas previamente, tendo como foco apenas a solução das **missões** disponíveis ao longo de comentários na estrutura dos códigos, representadas como: 

`TODO - MISSAO N`

Em sequência, são disponibilizadas as etapas para o cumprimento da tarefa.

## 📁Arquivos

- `placar_dinamico.c`: base funcional para a Missão 1 e pontos de implementação da Missão 2.
- `participante.c`: estrutura inicial para a Missão 3.
- `auditoria_memoria.c`: casos A a D para análise textual da Missão 4. Os trechos defeituosos estão isolados e não devem ser executados.

## ⚙️Como compilar

No terminal, dentro da pasta onde estão os arquivos:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic placar_dinamico.c -o placar
gcc -std=c11 -Wall -Wextra -Wpedantic participante.c -o participante
gcc -std=c11 -Wall -Wextra -Wpedantic auditoria_memoria.c -o auditoria
```

No Windows com PowerShell, pode ser necessário executar `./placar.exe` ou `.\placar.exe`. Em Linux ou Git Bash, use `./placar`.

---