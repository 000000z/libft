int	ft_isalpha(int chr)
{
    if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
	    return (1);
    return (0);
}
