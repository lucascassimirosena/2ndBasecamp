/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:32:32 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/18 22:11:33 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;    
                              
	i = 0;           
	while (i < n && src[i] != '\0')  
	{                               
		dest[i] = src[i];          
		i++;                 
	}                            
	while (i < n)               
	{                          
		dest[i] = '\0';       
		i++;                 
	}                       
	return (dest);         
}