*Este projeto foi criado como parte do currículo 42 por rayperei.*

# 📚 Libft - 42 School

<div align="center">

![42](https://img.shields.io/badge/42-Libft-blue)
![Language](https://img.shields.io/badge/Language-C-orange)
![Status](https://img.shields.io/badge/Status-Completed-success)

**Author:** rayperei

*"A Libft é a base de praticamente todos os projetos da 42."*

</div>

---

# 📖 Descrição

A **Libft** é o primeiro projeto do currículo da 42.

O objetivo é recriar funções importantes da biblioteca padrão da linguagem C (**libc**) para desenvolver um entendimento profundo sobre o funcionamento interno da linguagem e da memória.

Durante o desenvolvimento, são reimplementadas funções fundamentais que envolvem:

- Manipulação de strings
- Manipulação de memória
- Conversão de tipos
- Verificação de caracteres
- Alocação dinâmica
- Estruturas de dados
- Escrita em file descriptors

Ao final do projeto, é gerada uma biblioteca estática reutilizável:

libft.a

Essa biblioteca será utilizada em diversos projetos futuros da 42, servindo como base para todo o aprendizado posterior.

---

# 🎯 Objetivos de Aprendizado

Este projeto tem como foco principal:

## 🧠 Entender memória em C
- Diferença entre stack e heap
- Uso correto de malloc e free
- Evitar memory leaks

## 🧠 Dominar ponteiros
- Ponteiros simples e duplos
- Manipulação de endereços
- Acesso direto à memória

## 🧠 Manipulação de strings
- Strings como arrays de char
- Terminação com '\0'
- Operações seguras sem overflow

## 🧠 Estruturas de dados
- Listas encadeadas
- Alocação dinâmica de nós
- Manipulação de ponteiros em estruturas

---

# 📦 Estrutura da Biblioteca

A Libft é dividida em diferentes módulos:

---

## 🔤 1. Funções de verificação de caracteres

Funções que verificam propriedades de um caractere.

- ft_isalpha → verifica letras
- ft_isdigit → verifica números
- ft_isalnum → letras ou números
- ft_isascii → verifica ASCII válido
- ft_isprint → caracteres imprimíveis

---

## 🔠 2. Conversão de caracteres

- ft_toupper → converte para maiúsculo
- ft_tolower → converte para minúsculo

---

## 🧵 3. Manipulação de strings

Strings são sequências de caracteres terminadas em '\0'.

- ft_strlen → calcula tamanho da string
- ft_strdup → duplica string
- ft_substr → extrai substring
- ft_strjoin → concatena strings
- ft_strtrim → remove caracteres das extremidades
- ft_split → divide string por delimitador
- ft_strchr → encontra caractere
- ft_strrchr → encontra último caractere
- ft_strncmp → compara strings com limite
- ft_strnstr → busca substring
- ft_strmapi → aplica função em cada caractere
- ft_striteri → aplica função com índice

---

## 🧠 4. Manipulação de memória

A memória é tratada como blocos de bytes.

- ft_memset → preenche memória
- ft_bzero → zera memória
- ft_memcpy → copia memória
- ft_memmove → copia com segurança (overlap)
- ft_memchr → busca byte
- ft_memcmp → compara blocos
- ft_calloc → aloca memória inicializada em zero

---

## 🔄 5. Conversões

- ft_atoi → string para inteiro
- ft_itoa → inteiro para string

---

## 📡 6. File descriptors

No sistema Unix, tudo é arquivo:

- 0 → entrada padrão (stdin)
- 1 → saída padrão (stdout)
- 2 → erro padrão (stderr)

Funções:

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

## 🔗 7. Listas encadeadas (bonus)

Estrutura:

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

## 🔗 Listas encadeadas (bonus)

Funções:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

# 🧪 Compilação

Para compilar a biblioteca:

make

Para compilar com bônus:

make bonus

Para limpar arquivos objetos:

make clean

Para limpar tudo:

make fclean

Para recompilar do zero:

make re

---

# 📚 Dependências importantes

Algumas funções são base para outras:

- ft_strlen → base para várias funções de string  
- ft_memcpy → base para cópias de memória  
- ft_calloc → base para alocação segura  

Se essas funções estiverem incorretas, várias outras falham em cascata.

---

# 🧠 Conceitos fundamentais

## Stack vs Heap

Stack: memória automática  
Heap: memória dinâmica (malloc/free)

---

## NULL vs '\0'

NULL → ponteiro nulo  
'\0' → fim de string

---

## memcpy vs memmove

memcpy → não trata sobreposição  
memmove → seguro para sobreposição

---

# 🚀 Conclusão

A Libft é a base de toda a formação na 42.

Ela consolida conhecimentos fundamentais como:

- Manipulação de memória
- Ponteiros
- Strings
- Estruturas de dados
- Alocação dinâmica

Todo o restante da formação se constrói sobre esse projeto.

---

# 📌 Recursos

## Documentação utilizada

- man 3 libc  
- documentação oficial da linguagem C  
- padrões POSIX  

---

## 👨‍💻 Autor

rayperei — 42 School
