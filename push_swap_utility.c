/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utility.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:58:32 by lseiberr          #+#    #+#             */
/*   Updated: 2023/09/05 03:30:58 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_liste	*ft_lstnew(int value)
{
	t_liste	*new;

	new = (t_liste *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

// Adds the specified node to a stack (liste) making it the head
void	ft_lstadd_front(t_liste **stack, t_liste *new)
{
	new->next = *stack;
	*stack = new;
}

// Returns the last node of a liste
t_liste	*ft_lstlast(t_liste *head)
{
	t_liste	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

// Adds the specified node to a stack (liste) making it the last node
void	ft_lstadd_back(t_liste **stack, t_liste *new)
{
	t_liste	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

// Returns the size of the Linked liste
int	ft_lstsize(t_liste *head)
{
	size_t	i;
	t_liste	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
