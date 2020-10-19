# Estrutura do Repositório

O repositório está estruturado da seguinte forma:

```
+ m01/
  + m0101/
    | main.c
    | makefile
  + m0102/
    | main.c
    | makefile
  + m0103/
    | main.c
    | makefile
  + m0104/
    | main.c
    | makefile
+ m02/
+ m03/
+ m04/
+ m05/
+ m06/
+ m07/
+ m08/
+ m09/
+ m10/
+ m11/
| .gitignore
| README.md
```
## Fichas de Trabalho

As fichas de trabalho estão organizadas por diretorias: 
- **m01**: Ficha 01 - Introdução;
- **m02**: Ficha 02 - Operadores;
- **m03**: Ficha 03 - Operandos;
- **m04**: Ficha 04 - Fluxo de Controlo;
- **m05**: Ficha 05 - Funções;
- **m06**: Ficha 06 - Vectores;
- **m07**: Ficha 07 - Apontadores;
- **m08**: Ficha 08 - printf/scanf;
- **m09**: Ficha 09 - Estruturas;
- **m10**: Ficha 10 - Ficheiros;
- **m11**: Ficha 11 - Heap.

Nas aulas práticas, a cada semana, é realizada uma ficha de trabalho.

## Exercícios da Ficha

Dentro da diretoria de cada uma das fichas de trabalho, deve existir uma diretoria para cada dos exercícios. Por exemplo, a ficha de trabalho **m01**, contém as seguintes diretorias:
- **m0101**: Exercício 1 da Ficha 01; 
- **m0102**: Exercício 2 da Ficha 01; 
- **m0103**: Exercício 3 da Ficha 01;
- **m0104**: Exercício 4 da Ficha 01;.

O noma das diretorias dos exercícios deve seguir o seguinte padrão:
```
m<numero-da-fichas><numero-do-exercicio>
```

Como já deve ter reparado, só foram criadas as diretorias de exercícios para a ficha de trabalho 1. Nas restantes fichas de trabalho, deve ser o aluno a criar a estrutura de diretorias dos exercícios.  

## Ficheiros dos Exercícios

Dentro de cada uma das diretorias de exercício, devem existir dois ficheiros: 
- **main.c**: contém o código em C do exercício a ser implementado pelo aluno;
- **makefile**: permite compilar o código C do exercício.

## Resolução de um exercício

Para o aluno resolver um exercício, vamos tomar como exemplo a resolução do exercício 1 (**m0101**) da ficha de trabalho 1 (**m01**).

- Mover para a diretoria do exercício (caso esteja na diretoria raiz do repositório)
```
$ cd m01/m0101
```

- Escrever o código do exercício
```
code main.c
``` 

- Compilar o código do exercício
```
$ make
```
- Testar se está a funcionar corretamente
```
$ ./m0101
```
- Submeter as alterações no repositório do código do **GitHub**
```
$ git add .
$ git commit -m <mensagem>
$ git push
```
Deverá fazer o mesmo para os restantes exercícios.
