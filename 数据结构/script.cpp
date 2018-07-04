/*�㷨2.6*/
struct List
{
	int length;
	Elem * elem;
	int listsize;
};
void MERGE(List A, List B, List & C) {
	int a, b = A.length, B.length;
	Elem* la, lb = A.elem, B.elem;//��ʼ��ַ
	Elem* fa, fb = A.elem + la, B.elem + lb;//�����ĵ�ַ
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
	while (la<=fa)//����ʣ���A�е�Ԫ��
	{
		*lc = *la;
		la++;
		lc++;
	}
	while (lb<=fb)//����ʣ���B�е�Ԫ��
	{
		*lc = *lb;
		lb++;
		lc++;
	}
}