/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:54:30 by lseiberr          #+#    #+#             */
/*   Updated: 2023/09/05 03:50:50 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include "Libft/libft.h"
// Stack
typedef struct s_liste
{
	int				value;
	int				index;
	struct s_liste	*next;
}				t_liste;

// Util functions
t_liste	*ft_lstnew(int value);
t_liste	*ft_lstlast(t_liste *head);
void	ft_lstadd_front(t_liste **stack, t_liste *new);
void	ft_lstadd_back(t_liste **stack, t_liste *new);
void	printList(t_liste *head);
int		ft_lstsize(t_liste *head);

void	ft_error(char *msg);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_liste **stack);
int		get_distance(t_liste **stack, int index);
void	make_top(t_liste **stack, int distance);
void	free_stack(t_liste **stack);
void	ft_free(char **str);

// Algorithm utils
void	radix_sort(t_liste **stack_a, t_liste **stack_b);
void	simple_sort(t_liste **stack_a, t_liste **stack_b);
void	index_stack(t_liste **stack);
void	sort_5(t_liste **stack_a, t_liste **stack_b);
void	sort_9(t_liste **stack_a);
void	sort_65(t_liste **stack_a);

// Instruction functions
int		swap(t_liste **stack);
int		push(t_liste **stack_to, t_liste **stack_from);
int		rotate(t_liste **stack);
int		reverseRotate(t_liste **stack);

int		sa(t_liste **stack_a);
int		sb(t_liste **stack_b);
int		ss(t_liste **stack_a, t_liste **stack_b);
int		pa(t_liste **stack_a, t_liste **stack_b);
int		pb(t_liste **stack_b, t_liste **stack_a);
int		ra(t_liste **stack_a);
int		rb(t_liste **stack_b);
int		rr(t_liste **stack_a, t_liste **stack_b);
int		rra(t_liste **stack_a);
int		rrb(t_liste **stack_b);
int		rrr(t_liste **stack_a, t_liste **stack_b);

#endif
