# 📚 Libft - 42 School

*Este projeto foi criado como parte do currículo 42 por rayperei.*

<div align="center">

![42](https://img.shields.io/badge/42-Libft-blue)
![Language](https://img.shields.io/badge/Language-C-orange)
![Status](https://img.shields.io/badge/Status-Completed-success)

**Author:** rayperei

*"A Libft é a base de praticamente todos os projetos da 42."*

</div>

---

# 📖 Sobre o Projeto

A **Libft** é o primeiro projeto do currículo da 42.

O objetivo é recriar funções importantes da biblioteca padrão da linguagem C (**libc**) para desenvolver um entendimento profundo sobre:

- Ponteiros
- Memória
- Strings
- Alocação dinâmica
- Estruturas de dados
- File Descriptors
- Recursão
- Manipulação de bytes

Ao final do projeto é criada uma biblioteca estática:

```bash
libft.a
```

que será reutilizada em diversos projetos futuros.

---

# 🎯 Conceitos Aprendidos

## 🧠 Ponteiros

Um ponteiro guarda um endereço de memória.

```c
int x = 42;
int *ptr = &x;
```

Visual:

```text
x

0x100
┌────┐
│ 42 │
└────┘

ptr
 │
 ▼
0x100
```

---

## 🧠 Stack vs Heap

### Stack

Memória automática.

```c
int x = 42;
```

```text
STACK

┌──────┐
│ x=42 │
└──────┘
```

---

### Heap

Memória alocada com malloc.

```c
char *str = malloc(100);
```

```text
HEAP

┌─────────────┐
│             │
│   100 B     │
│             │
└─────────────┘
```

Necessita:

```c
free(str);
```

---

## 🧠 NULL vs '\0'

### NULL

```c
char *str = NULL;
```

Significa:

```text
Não aponta para nada.
```

---

### '\0'

```c
char str[] = "Hi";
```

```text
H  i  \0
```

Significa:

```text
Fim da string.
```

---

## 🧠 ASCII

```text
'A' = 65
'Z' = 90

'a' = 97
'z' = 122

'0' = 48
'9' = 57
```

Diferença:

```text
97 - 65 = 32
```

Por isso:

```c
toupper -> -32
tolower -> +32
```

---

# 📂 Funções da Libft

## 1️⃣ Verificação de Caracteres

Funções responsáveis por verificar categorias de caracteres.

| Função | Descrição |
|----------|----------|
| ft_isalpha | Verifica letras |
| ft_isdigit | Verifica números |
| ft_isalnum | Verifica letras ou números |
| ft_isascii | Verifica ASCII |
| ft_isprint | Verifica caracteres imprimíveis |

Exemplo:

```c
ft_isalpha('A');
```

Resultado:

```text
1
```

---

## 2️⃣ Conversão de Caracteres

| Função | Descrição |
|----------|----------|
| ft_toupper | Minúscula → Maiúscula |
| ft_tolower | Maiúscula → Minúscula |

Exemplo:

```c
ft_toupper('a');
```

↓

```text
A
```

---

## 3️⃣ Manipulação de Strings

Strings são sequências de caracteres terminadas por:

```text
\0
```

Exemplo:

```text
H e l l o \0
```

### Funções

| Função | Descrição |
|----------|----------|
| ft_strlen | Conta caracteres |
| ft_strchr | Primeira ocorrência |
| ft_strrchr | Última ocorrência |
| ft_strncmp | Compara strings |
| ft_strnstr | Procura substring |
| ft_strdup | Duplica string |
| ft_substr | Recorta string |
| ft_strjoin | Junta strings |
| ft_strtrim | Remove caracteres das extremidades |
| ft_split | Divide string |
| ft_strmapi | Cria nova string transformada |
| ft_striteri | Modifica string original |

---

### Família das Strings

```text
STRINGS

ft_strdup
    ↓
  CLONA

ft_substr
    ↓
  RECORTA

ft_strjoin
    ↓
  JUNTA

ft_split
    ↓
  DIVIDE

ft_strtrim
    ↓
  APARA
```

---

## 4️⃣ Manipulação de Memória

A memória não sabe o que é string.

Ela vê apenas:

```text
BYTES
```

### Funções

| Função | Descrição |
|----------|----------|
| ft_memset | Preenche memória |
| ft_bzero | Zera memória |
| ft_memcpy | Copia memória |
| ft_memmove | Copia com overlap |
| ft_memchr | Procura byte |
| ft_memcmp | Compara bytes |
| ft_calloc | Aloca memória zerada |

---

### Família da Memória

```text
MEMÓRIA

├── memset
│      pinta
│
├── bzero
│      zera
│
├── memcpy
│      copia
│
├── memmove
│      copia com overlap
│
├── memchr
│      procura
│
└── memcmp
       compara
```

---

### memcpy vs memmove

#### memcpy

```text
ABCDE
```

Pode falhar em sobreposição.

---

#### memmove

```text
ABCDE
 ↓
ABABC
```

Seguro para overlap.

---

## 5️⃣ Cópia e Concatenação

| Função | Descrição |
|----------|----------|
| ft_strlcpy | Copia com limite |
| ft_strlcat | Concatena com limite |

---

## 6️⃣ Conversões

| Função | Descrição |
|----------|----------|
| ft_atoi | String → Inteiro |
| ft_itoa | Inteiro → String |

### ft_atoi

```text
"42"
```

↓

```text
42
```

---

### ft_itoa

```text
42
```

↓

```text
"42"
```

---

## 7️⃣ File Descriptors

No Linux tudo é tratado como arquivo.

### Descritores

```text
0 -> stdin
1 -> stdout
2 -> stderr
```

### Funções

| Função | Descrição |
|----------|----------|
| ft_putchar_fd | Escreve caractere |
| ft_putstr_fd | Escreve string |
| ft_putendl_fd | String + newline |
| ft_putnbr_fd | Escreve número |

---

## 8️⃣ Listas Encadeadas (Bonus)

Estrutura:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Visual:

```text
[A]
 ↓
[B]
 ↓
[C]
 ↓
NULL
```

### Funções

| Função | Descrição |
|----------|----------|
| ft_lstnew | Cria nó |
| ft_lstadd_front | Adiciona no início |
| ft_lstsize | Conta nós |
| ft_lstlast | Último nó |
| ft_lstadd_back | Adiciona no final |
| ft_lstdelone | Remove nó |
| ft_lstclear | Limpa lista |
| ft_lstiter | Percorre lista |
| ft_lstmap | Cria nova lista transformada |

---

# 🔗 Dependências Importantes

```text
ft_strlen
    │
    ├── ft_strdup
    ├── ft_substr
    ├── ft_strjoin
    ├── ft_strtrim
    ├── ft_split
    ├── ft_strmapi
    └── ft_striteri
```

📌 Se `ft_strlen` estiver errada, várias funções da Libft falham.

---

# 🏆 Perguntas Clássicas de Avaliação

### O que é NULL?

```text
Ponteiro que não aponta para nada.
```

### O que é '\0'?

```text
Fim de uma string.
```

### Diferença entre memcpy e memmove?

```text
memcpy -> sem overlap

memmove -> com overlap
```

### Diferença entre malloc e calloc?

```text
malloc -> aloca

calloc -> aloca e zera
```

### O que faz ft_split?

```text
Divide uma string usando delimitador.
```

### O que faz ft_strtrim?

```text
Remove caracteres do início e do final.
```

### O que é um file descriptor?

```text
Identificador de arquivo usado pelo sistema operacional.
```

### O que é um ponteiro?

```text
Variável que guarda endereços de memória.
```

---

# 🚀 Compilação

Gerar a biblioteca:

```bash
make
```

Gerar apenas os bônus:

```bash
make bonus
```

Limpar objetos:

```bash
make clean
```

Limpar tudo:

```bash
make fclean
```

Recompilar:

```bash
make re
```

---

# 🎓 Conclusão

A Libft é muito mais do que uma coleção de funções.

Ela é o primeiro contato profundo com:

- Memória
- Ponteiros
- Strings
- Heap
- Stack
- Alocação dinâmica
- Estruturas de dados
- Manipulação de bytes

Todo o restante da formação na 42 é construído sobre os conhecimentos adquiridos neste projeto.

---

## 👨‍💻 Autor

**rayperei**

42 School — Libft Project 🚀
