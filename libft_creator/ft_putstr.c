void	ft_putchar(char c);

char	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] >= 32 && str[i] <= 126 && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str[i]);
}
