int my_strlen(const char* str) {
	if (str == nullptr) {
		return -1;
	}

	int size = 0;

	while (str[size] != '\0') {
		size++;
	}

	return size;
}

int my_strcmp(const char* lhs, const char* rhs) {
	if (lhs == nullptr || rhs == nullptr) {
		std::cout << "nullptr error";
		return 0;
	}

	while (*lhs == *rhs && *lhs != '\0' && *rhs != '\0') {
		lhs++;
		rhs++;
	}

	return *lhs - *rhs;
}

void my_strcat(char* dest, const char* src) {
	if (dest == nullptr || src == nullptr) {
		std::cout << "nullptr error";
		return;
	}

	//int destLen = my_strlen(dest);
	//int srcLen = my_strlen(src);

	//for (size_t i = 0; i <= srcLen; i++)
	//{
	//	dest[destLen + i] = src[i];
	//}


	dest += my_strlen(dest);

	while (*src != '\0') {
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';
}

void my_strcat_s(char* dest, size_t destSize, const char* src) {
	if (dest == nullptr || src == nullptr) {
		std::cout << "nullptr error";
		return;
	}

	int destLen = my_strlen(dest);
	int srclen = my_strlen(src);

	for (size_t i = destLen; i < destSize; i++)
	{
		dest[i] = *src;

		if (*src == '\0') return;

		src++;
	}

	dest[destSize - 1] = '\0';
}

void my_strcopy(char* dest, const char* src) {
	if (dest == nullptr || src == nullptr) {
		std::cout << "nullptr error";
		return;
	}

	while (*src != '\0') {
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';
}

void my_strcopy_s(char* dest, size_t destSize, const char* src) {
	if (dest == nullptr || src == nullptr) {
		std::cout << "nullptr error";
		return;
	}

	int destLen = my_strlen(dest);

	for (size_t i = 0; i < destSize; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0') return;
	}

	dest[destSize - 1] = '\0';
}

int charToDigit(char digit) {
	if (digit < '0' || digit > '9') {
		return -1;
	}

	return digit - '0';
}

int my_atoi(const char* str) {
	if (str == nullptr) {
		std::cout << "nullptr error";
		return 0;
	}

	int INT_MAX_LEN = 9;
	int strLen = my_strlen(str);

	bool isNegative = false;

	if (str[0] == '-') isNegative = true;

	if (strLen - isNegative > INT_MAX_LEN) {
		std::cout << "ne moem go suberem";
		return 0;
	}

	int result = 0;

	for (int i = isNegative; i < strLen; i++)
	{
		int digit = charToDigit(str[i]);

		if (digit < 0) {
			std::cout << "string is not in the correct format";
			return 0;
		}

		result = result * 10 + digit;
	}

	if (isNegative) result = -result;

	return result;
}

int searchInText(const char* what, const char* text) {
	if (what == nullptr || text == nullptr) {
		std::cout << "nullptr error";
		return 0;
	}

	int lastIndToSearch = my_strlen(text) - my_strlen(what);
	int whatlen = my_strlen(what);

	for (int i = 0; i <= lastIndToSearch; i++)
	{
		bool foundWhat = true;

		for (int j = 0; j < whatlen; j++)
		{
			if (what[j] != text[i + j]) {
				foundWhat = false;
				break;
			}
		}

		if (foundWhat) return i;
	}

	return -1;
}

int getCharoOccurrencesCount(char ch, const char* str) {
	if (str == nullptr) {
		return -1;
	}

	if (ch == '\0') return 1;//

	int occurrences = 0;

	while (*str != '\0') {
		if (*str == ch)
			occurrences++;
	}

	return occurrences;
}
