# PushSwap


## Input(s)
- int[]: L'input doit être une liste de int

## Makefile
Le Makefile comporte plusieurs règle d'utilisation. Leur nom et utilisation est listée ci-dessous.

- all: Compile la librairie intégralement.
- clean: Remove les ".o" généré lors de la compilation.
- fclean: Remove les ".o" généré lors de la compilation et la librairie (en .a).
- re: Remove les ".o" généré lors de la compilation et la librairie (en .a) puis recompile la librairie intégralement.
- tests_run: Compile et lance les Tests relatif à la librairie de my_printf.

# Executable Exemple(s)
* ./pushswap 5 4 3 2 1
> A VENIR: cat listes/intermediate_07_unsorted_list_positive_numbers_5 | ./push_swap


## Tests
- 3 tests fonctionnel
- 3 Succès
- 0 Fails
- 0 Crash

Fichier | Ligne | Exec | Cover
------- | ----- | ---- | -----
| src/main.c | 0 | 0 | 0% |
|----------------------|----|----|-----|
| buble_linked.c       | 41 |  0 |  0% |
| error.c              | 19 | 14 | 73% |
| swap_linked.c        | 38 |  0 |  0% |
| tests/test_project.c | 31 | 10 | 32% |
| tools.c              |  7 |  0 |  0% |
|TOTAL | 136 | 24 | 17% |
|------------------------|-----|-----|----- |