har	*ft_itoa(int n)
{
	int		len;
	int		copy;
	char	*str;

	len = 1;
	if (n < 0)
		len++;
	else
		n = -n;
	copy = n;
	while (copy / 10 && ++len)
		copy /= 10;
	if (!(str = malloc(len + 1)))
		return (NULL);
	str[len] = 0;
	while (len-- && (str[len] = '0' - n % 10))
		n /= 10;
	if (str[0] == '0' && str[1])
		str[0] = '-';
	return (str);
}
