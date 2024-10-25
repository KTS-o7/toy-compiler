#define CLEAR "\x1B[0m"
#define F_R "\x1B[31m"
#define F_G "\x1B[32m"
#define F_Y "\x1B[33m"
#define F_B "\x1B[34m"
#define F_M "\x1B[35m"
#define F_C "\x1B[36m"
#define F_W "\x1B[37m"
#define B_Y "\x1b[43m"
#define A_B "\x1b[1m"
#define SYM_TICK "\xE2\x9C\x93"
#define DASH "==================================================================================================\n"

void trace(char *s);
void multiline_comment();
void yyerror(const char *s);