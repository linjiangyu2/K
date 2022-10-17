#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -rv -f ./ca.sh 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\105"
#define      shll_z	10
#define      shll	((&data[3]))
	"\133\100\254\361\222\017\077\342\241\036\101\372\072"
#define      xecc_z	15
#define      xecc	((&data[15]))
	"\300\255\313\372\176\175\312\012\027\245\024\366\216\100\211\306"
	"\161\005\262"
#define      inlo_z	3
#define      inlo	((&data[33]))
	"\213\344\244"
#define      opts_z	1
#define      opts	((&data[36]))
	"\162"
#define      chk2_z	19
#define      chk2	((&data[41]))
	"\335\340\362\027\343\231\333\311\142\122\017\321\204\253\064\255"
	"\110\016\314\101\061\212\373\327\140"
#define      lsto_z	1
#define      lsto	((&data[62]))
	"\130"
#define      tst1_z	22
#define      tst1	((&data[65]))
	"\337\276\046\362\222\240\002\113\143\207\077\073\335\111\334\013"
	"\353\205\016\173\231\107\007\016\022\103\041\336\003"
#define      chk1_z	22
#define      chk1	((&data[97]))
	"\333\363\043\232\144\241\330\346\337\352\330\072\027\342\125\311"
	"\067\076\136\066\144\321\220\113\372\371\152\301\222\142\052"
#define      msg2_z	19
#define      msg2	((&data[124]))
	"\207\377\063\061\175\362\150\376\052\210\370\206\256\072\123\247"
	"\326\307\304\325"
#define      msg1_z	42
#define      msg1	((&data[148]))
	"\334\253\116\133\203\232\261\345\366\227\143\137\034\336\066\017"
	"\014\053\110\310\246\302\131\130\270\263\212\061\330\122\047\121"
	"\205\142\225\116\313\334\161\115\310\314\121\070\242\215\154\056"
	"\031\225\161\073\163\165\316"
#define      rlax_z	1
#define      rlax	((&data[198]))
	"\037"
#define      text_z	324
#define      text	((&data[224]))
	"\257\017\327\022\072\107\126\127\317\161\325\232\115\201\351\250"
	"\004\027\302\231\210\376\015\376\314\230\324\142\112\372\170\117"
	"\227\376\036\044\145\354\077\013\356\060\361\225\106\041\170\211"
	"\236\200\024\242\265\200\351\312\243\066\141\340\241\264\341\070"
	"\007\074\055\377\207\036\063\373\305\301\100\001\213\271\314\371"
	"\033\314\227\165\307\011\043\274\377\303\102\270\137\227\373\272"
	"\045\103\221\252\311\015\335\125\021\134\375\340\113\337\020\370"
	"\156\214\146\042\144\320\370\272\144\152\062\130\122\152\244\111"
	"\336\276\260\000\306\073\265\042\276\274\172\360\053\217\232\302"
	"\173\021\054\342\050\133\034\265\141\306\205\016\316\077\252\200"
	"\022\142\144\165\052\212\012\331\146\064\260\306\100\116\214\054"
	"\043\325\375\101\061\023\353\301\363\062\371\123\276\071\023\117"
	"\227\301\226\244\170\163\045\320\031\250\350\352\255\050\120\027"
	"\244\274\110\254\365\001\202\325\240\223\105\143\352\172\260\236"
	"\231\102\355\074\076\007\151\374\002\050\331\107\263\033\102\356"
	"\230\075\346\063\130\166\360\120\206\153\366\004\166\065\232\277"
	"\276\344\340\243\242\015\376\341\317\121\244\044\023\110\173\214"
	"\223\013\014\023\331\366\143\215\030\263\160\110\064\030\305\362"
	"\102\232\267\265\140\103\275\022\356\010\223\207\100\371\015\026"
	"\111\251\042\303\327\005\305\017\247\376\045\247\100\070\374\211"
	"\022\212\244\044\074\356\056\212\054\304\065\260\361\352\242\237"
	"\246\155\373\331\023\230\332\174\322\247\333\240\353\145\051\166"
	"\261\170\273\141\210\223\163\302\332\311\032\252\072\357\104\210"
	"\161\055\061"
#define      tst2_z	19
#define      tst2	((&data[571]))
	"\016\015\213\365\315\111\011\315\222\154\114\025\233\143\211\201"
	"\076\027\316\007\316\361\033\314"
#define      pswd_z	256
#define      pswd	((&data[626]))
	"\065\062\156\360\223\367\203\007\271\136\321\324\010\013\304\115"
	"\224\065\173\305\252\300\271\270\217\253\324\133\151\125\122\237"
	"\075\271\042\301\141\151\000\013\247\054\372\147\271\071\206\371"
	"\042\311\246\266\202\206\100\112\227\047\255\060\153\310\160\250"
	"\201\223\151\343\375\152\356\245\227\350\014\121\042\222\112\104"
	"\134\361\373\337\167\073\051\017\143\327\100\316\237\260\167\040"
	"\104\341\004\101\113\362\347\342\333\363\063\375\205\176\102\341"
	"\157\076\301\347\171\352\367\334\301\067\253\141\347\043\202\054"
	"\004\206\156\120\170\125\063\124\110\146\122\316\345\224\260\124"
	"\322\161\073\114\134\063\051\036\152\324\177\122\370\001\176\374"
	"\210\355\115\001\102\200\125\213\346\247\132\314\074\012\040\017"
	"\174\134\133\330\217\204\366\371\131\166\113\122\170\312\116\000"
	"\267\233\001\372\033\126\205\002\376\337\317\073\352\357\112\146"
	"\114\246\077\334\053\065\326\204\254\042\327\044\354\045\044\244"
	"\301\045\236\335\174\044\340\172\004\257\266\356\237\000\124\354"
	"\246\223\310\321\311\237\126\165\301\055\232\256\123\276\123\025"
	"\343\361\362\140\025\323\333\032\202\221\010\042\221\135\016\070"
	"\361\327\012\273\166\140\060\070\216\313\346\341\211\071\367\155"
	"\207\301\217\033\270\023\042\161\162\363\106\173\377\012\310\223"
	"\100\104\131\352\005\022\243\224\275\170\360\047\315\102\306\125"
	"\003\126\160\273\152\222\055\334\205\164\130\205\176\040\030\277"
	"\145\161\252\152\203\116\376\101\306\356\150\224\060\057"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
