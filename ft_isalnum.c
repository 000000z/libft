int	ft_isalnum(int chr)
{
    if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z') || (chr >= '0' && chr <= '9'))
	    return (1);
    return (0);
}
