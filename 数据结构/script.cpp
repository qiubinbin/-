/*算法2.6*/
struct List
{
	int length;
	Elem * elem;
	int listsize;
};
void MERGE(List A, List B, List & C) {
	int a, b = A.length, B.length;
	Elem* la, lb = A.elem, B.elem;//起始地址
	Elem* fa, fb = A.elem + la, B.elem + lb;//结束的地址
	Elem lc = (Elem*)malloc((a + b) * sizeof(Elem));
	if (!lc.elem) exit (OVERFLOW);
	while (la<=fa && lb<=fb)
	{
		if (*la <= *lb) {
			*lc = *la;
			la++;
			lc++;
		}
		else
		{
			*lc = *lb;
			lb++;
			lc++;
		}
	}
	while (la<=fa)//插入剩余的A中的元素
	{
		*lc = *la;
		la++;
		lc++;
	}
	while (lb<=fb)//插入剩余的B中的元素
	{
		*lc = *lb;
		lb++;
		lc++;
	}
}