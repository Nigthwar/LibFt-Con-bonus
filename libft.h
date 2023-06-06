/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:25:36 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/04 17:31:14 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
librerias necesarias para funcionamiento de los programas
*/
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
//comprueba simbolos
int					ft_atoi(const char *str);
//comprueba si es numerico
int					ft_isalnum(int a);
//comprueba si es alphanumerico
int					ft_isalpha(int a);
//comprueba si es imprimible
int					ft_isprint(int a);
//comprueba el largo de un str
size_t				ft_strlen(const char *str);
//comprueba que sean minusculas
int					ft_tolower(int a);
// copia y pega una parte de str en otro espacio de mem
size_t				ft_strlcat(char *dest, char *src, size_t dstsize);
// copia un str
int					ft_strncmp(char *s1, char *s2, size_t n);
//comprueba que sea un digito comprendido entr 0 y 9
int					ft_isdigit(int a);
//comprueba que el valor aportado sea ascii y da 1 si es ascii y 0s
//si no lo es.
int					ft_isascii(int a);
//copia una cadena de caracteres pasada por Dst(destino) a src(source)
//con el numero de caracteres especificado
size_t				ft_strlcpy(char *dst, char *src, size_t n);
//escribe letra a letra en un str
void				*ft_memset(void *b, int c, size_t len);
//escribe zeros en una cadena de byte
void				ft_bzero(void *s, size_t n);
//copia areas de memoria especifica
void				*ft_memcpy(void *dst, const void *src, size_t n);
// mueve un str a otro espacio de memoria sin destruirla
void				*ft_memmove(void *dst, const void *src, size_t n);
// pasa minusculas a mayusculas
int					ft_toupper(int a);
// localiza un caracter en una cadena
char				*ft_strchr(const char *s, int c);
// guarda la primera coincidencia con C
char				*ft_strrchr(const char *s, int c);
// combierte la primera coincidencia en un unsigned char
void				*ft_memchr(const void *s, int c, size_t n);
//localiza una sub-cadena dentro de una cadena
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
// compara dos str y devuelve 0
int					ft_memcmp(const void *s1, const void *s2, size_t n);
//aloja memoria para un array con N mem en un espacio de bytes
void				*ft_calloc(size_t nmem, size_t size);
//devuelve la copia de una cadena ,la nueva cadena se obtiene con malloc
char				*ft_strdup(const char *s);
//extrae caracteres entre m'th y n'th índice de la string de origen
char				*ft_substr(char const *s, unsigned int start, size_t len);
//concatena dos string en un string nuevo.
char				*ft_strjoin(char const *s1, char const *s2);
//toma dos argumentos(punteros) y recorta la parte objetivo
char				*ft_strtrim(char const *s1, char const *set);
//pasa de int a char
char				*ft_itoa(int n);
//a cada str S se le alplica la funcion dando los parametros indice.
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//a cada char en un str le aplica la funcion
//dando como parametros el indice de cada char
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
//envia la str 's' al archivo descrito por parametro
void				ft_putchar_fd(char c, int fd);
//envia el str 's' al archivo especificado
void				ft_putstr_fd(char *s, int fd);
//envia un str 's' al archivo descrito con un salto de linea
void				ft_putendl_fd(char *s, int fd);
// envia un int 'n' al archivo dado
void				ft_putnbr_fd(int n, int fd);
// reserva (malloc(3)) un array de strs, limitado por c y terminando en null
char				**ft_split(char const *s, char c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// crea un nodo con malloc(3).la variable "content" ,"next" son utilizadas
t_list				*ft_lstnew(void *content);
//añade el nodo "new" al principio de la lista "lst"
void				ft_lstadd_front(t_list **lst, t_list *new);
// cuenta el numero de nodos de una lista
int					ft_lstsize(t_list *lst);
//devuelve el ultimo nodo de la lista.
t_list				*ft_lstlast(t_list *lst);
//añade el nodo new al final de lst
void				ft_lstadd_back(t_list **lst, t_list *new);
/*
toma como parametro un nodo "lst" y libera memoria con "del" como parametro
 despues libera el nodo,no debe liberar "next"
*/
void				ft_lstdelone(t_list *lst, void (*del)(void *));
/*
elimina y libera el nodo "lst" y todo lo siguiente a ese nodo
utilizando "del" y free(3)
*/
void				ft_lstclear(t_list **lst, void (*del)(void *));
/*
itera "lst" y aplica la funcion "f" en el nodo
*/
void				ft_lstiter(t_list *lst, void (*f)(void *));
/*
itera "lst" y aplica "f" al nodo,crea un lista de la aplicacion
y "f" sobre cada nodo,la funcion
y con "del" borra el contenido si hace falta
*/
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
#endif
