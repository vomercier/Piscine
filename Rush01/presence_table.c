int	presence_table(char matrice[6][6], int nb_line, int indice)
{
	const char *base[10][8] = {
        {"left", "right", "sol1", "sol2", "sol3", "sol4", "sol5", "sol6"},
		{"1", "2", "4123", "4213", NULL, NULL, NULL, NULL},
		{"1", "3", "4132", "4231", "4312", NULL, NULL, NULL},
		{"1", "4", "4321", NULL, NULL, NULL, NULL, NULL},
		{"2", "1", "3124", "3214", NULL, NULL, NULL, NULL},
		{"2", "2", "1423", "2143", "2413", "3142", "3241", "3412"},
		{"2", "3", "1432", "2431", "3421", NULL, NULL, NULL},
		{"3", "1", "1324", "2134", "2314", NULL, NULL, NULL},
		{"3", "2", "1243", "1342", "2341", NULL, NULL, NULL},
		{"4", "1", "1234", NULL, NULL, NULL, NULL, NULL}};

		base_line = find_line_base(line, matrice);
		if base[indice][base_line] == NULL
			return (0);
		return (1);
}
