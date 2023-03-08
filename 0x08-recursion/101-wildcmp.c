/*
 * include our main header file
 */

/**
 * wildcmp - compares a string
 * @s1: string 1
 * @s2: string 2
 * Return: int 1 if identical if not 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		/* both strings are empty, they are considered identical */
		return (1);
	}
	else if (*s2 == '*')
	{
		/*
		 * the * character can match any string,
		 * so we recursively call the function with s1 and s2+1 (after *)
		 */
		return ((wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2))));
	}
	else if (*s1 == *s2)
	{
		/* current characters match, move on to next characters */
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		/* current characters do not match */
		return (0);
	}
}
