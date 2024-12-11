/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:06:40 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/11 13:12:57 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"

// static int linelen(char *line, ssize_t byreads)
// {
//     int i = 0;
//     while (i < byreads && line[i] != '\n') {
//         i++;
//     }
//     return i;
// }

// // Fonction pour copier le contenu du buffer dans la ligne
// static char *get_line(char *line, char *buffer, ssize_t byreads)
// {
//     int i = 0;
//     int line_len = linelen(buffer, byreads);
    
//     // Allouer de la mémoire pour la nouvelle ligne
//     line = (char *)malloc(line_len + 1);
//     if (!line) {
//         return NULL;  // Retourner NULL si l'allocation échoue
//     }

//     // Copier les données du buffer dans la ligne
//     while (i < line_len) {
//         line[i] = buffer[i];
//         i++;
//     }
//     line[i] = '\0';  // Terminer la ligne par un caractère nul

//     return line;
// }

// // Fonction pour traiter la ligne suivante
// static char *next_line(char *line, char *buffer)
// {
//     char *newline_pos;
    
//     newline_pos = ft_strchr(buffer);  // Trouver la position du '\n' dans buffer
//     if (newline_pos) {
//         int rest_len = ft_strlen(newline_pos + 1);  // Calculer la longueur du reste après le '\n'
        
//         // Allouer de la mémoire pour la partie restante de la ligne
//         line = (char *)malloc(rest_len + 1);
//         if (!line) {
//             return NULL;  // Retourner NULL si l'allocation échoue
//         }

//         // Copier les caractères après le '\n' dans line
//         ft_strcpy(line, newline_pos + 1);
//     }

//     return line;
// }

// char *get_next_line(int fd)
// {
//     char *buffer;
//     char *line = NULL;
//     ssize_t byreads;

//     buffer = (char *)malloc(BUFFER_SIZE);
//     if (!buffer) {
//         return NULL;
//     }

//     byreads = read(fd, buffer, BUFFER_SIZE);
//     if (byreads <= 0) {
//         free(buffer);
//         return NULL;  // Retourner NULL si la lecture échoue ou si la fin du fichier est atteinte
//     }

//     // Traitement de la ligne
//     line = get_line(line, buffer, byreads);

//     // Si la ligne est trouvée, la traiter pour obtenir la partie après '\n'
//     line = next_line(line, buffer);
    
//     free(buffer);  // Libérer le buffer après l'utilisation

//     return line;
// }

// int main()
// {
//     int fd = open("test.txt", O_RDONLY);
//     if (fd == -1) {
//         perror("open");
//         return 1;
//     }

//     char *line;
//     while ((line = get_next_line(fd)) != NULL) {
//         printf("%s", line);
//         free(line);  // Libérer la mémoire de la ligne après utilisation
//     }

//     close(fd);
//     return 0;
// }