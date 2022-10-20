#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -rv -f kkca.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[1]))
	"\312\036\022\324\370\327\132\227\231\230\177\141\050\017\047\365"
	"\152\272\221\052\354\274"
#define      chk2_z	19
#define      chk2	((&data[23]))
	"\156\332\377\055\210\066\355\272\110\351\116\351\036\103\065\307"
	"\336\311\243\301\355\144\115"
#define      inlo_z	3
#define      inlo	((&data[45]))
	"\134\244\221"
#define      tst1_z	22
#define      tst1	((&data[49]))
	"\164\201\152\174\057\142\227\022\207\262\070\354\261\127\374\156"
	"\166\310\214\270\070\107\050\276\235\300\306"
#define      chk1_z	22
#define      chk1	((&data[79]))
	"\115\200\235\124\162\002\172\113\075\005\164\130\044\367\326\040"
	"\327\034\073\257\005\146\320\241\151\100\032"
#define      text_z	563
#define      text	((&data[229]))
	"\304\242\337\001\135\115\356\302\232\065\040\073\270\152\007\054"
	"\050\244\354\357\075\256\102\213\057\340\337\112\270\306\060\175"
	"\151\017\177\306\135\155\211\367\243\251\062\133\024\071\207\074"
	"\336\163\053\033\042\156\246\121\116\206\234\007\115\314\205\266"
	"\333\004\175\070\162\006\060\025\260\143\160\304\235\367\000\173"
	"\153\053\227\216\232\076\340\350\305\174\360\022\110\166\310\044"
	"\172\105\135\355\114\215\002\374\360\163\301\215\153\301\011\326"
	"\355\241\144\207\337\105\160\244\301\141\267\012\327\177\056\142"
	"\232\242\361\007\314\147\321\222\152\064\314\374\026\345\327\110"
	"\257\047\255\372\242\332\236\201\306\321\204\275\344\051\061\310"
	"\355\032\153\215\273\021\012\370\167\045\105\123\313\256\022\126"
	"\211\043\130\246\070\323\343\373\353\230\306\125\017\222\146\057"
	"\304\035\253\015\072\376\310\320\336\357\102\057\315\202\044\020"
	"\012\035\377\204\103\011\364\030\074\044\050\041\110\230\274\367"
	"\347\340\322\236\320\042\217\012\017\324\350\173\211\312\051\275"
	"\156\051\365\174\255\105\226\316\272\236\231\371\325\105\302\105"
	"\164\320\046\214\271\154\126\252\333\117\131\267\035\023\122\371"
	"\217\044\065\125\013\364\334\302\353\343\133\040\377\246\244\102"
	"\336\345\072\036\205\010\303\054\052\176\154\354\066\365\343\071"
	"\220\104\172\204\120\047\340\046\106\202\205\252\041\243\345\203"
	"\311\321\306\350\105\304\025\234\333\370\343\072\163\275\327\357"
	"\050\073\046\144\051\223\177\051\062\173\333\374\145\134\300\344"
	"\125\315\023\137\045\211\352\040\044\105\342\035\052\300\167\147"
	"\362\377\122\257\016\102\006\302\355\163\206\350\115\350\255\134"
	"\123\030\355\223\376\225\224\020\162\365\212\301\217\264\076\355"
	"\131\027\234\057\274\010\074\277\226\253\125\100\156\346\143\366"
	"\330\323\057\134\113\251\264\164\120\120\104\036\334\142\261\074"
	"\335\317\230\057\025\317\040\367\027\160\231\054\264\357\375\223"
	"\233\343\327\234\044\206\375\040\243\055\374\123\201\313\355\251"
	"\013\007\342\173\070\325\204\040\200\312\367\257\241\054\112\262"
	"\220\012\302\142\000\050\223\362\332\260\175\067\244\344\261\205"
	"\062\273\150\047\003\317\050\166\104\253\171\314\104\002\356\052"
	"\151\131\020\072\070\133\161\162\376\034\147\014\154\120\050\351"
	"\324\351\170\220\051\043\270\347\247\127\067\233\035\210\264\165"
	"\126\050\230\366\020\122\104\040\232\235\131\020\053\045\224\324"
	"\324\077\174\004\311\340\044\376\301\146\032\034\374\343\336\153"
	"\201\152\065\354\067\055\247\376\067\020\065\326\356\323\120\120"
	"\131\023\123\075\332\253\174\003\221\046\260\302\250\354\045\227"
	"\103\264\007\043\270\252\271\024\140\142\053\122\162\100\200\173"
	"\345\372\201\132\162\215\143\242\147\132\215\271\060\241\205\355"
	"\337\341\062\171\170\316\234\201\047\100\164\062\271\154\307\344"
	"\312\013\104\101\112\321\025\314\373\210\045\056\315\132\335\057"
	"\101\022\260\311\262\142\241\326\335\355\247\234\204\200\341\251"
	"\017\074\121\305\213\076\021\031\101\016\012\264\317\230\037\221"
	"\241\366\177\103\133\006\043\240\167\310\141\330\177\153\257\377"
	"\232\001\304\046\100\326\077\201\344\111\066\264\341\125\105\203"
	"\113\304\307\247\313\352\107\102\262\251\033\061\025\312\060\257"
	"\314\365\325\014\313\025\216\257\136\304\143\100\032\251\304\146"
	"\155\213\015\071\165\125\173\047\376\226\131\023\141\211\303\055"
	"\177\231\072\112\256\310\371\015\215\135\115\250\006\022\016\164"
	"\235\034\255\022\161\051\072\157\300\223\203\041\035\106\117\234"
#define      tst2_z	19
#define      tst2	((&data[920]))
	"\216\122\132\023\035\162\304\210\271\207\053\237\365\014\217\211"
	"\342\275\162\122\013\340\233\340\076"
#define      pswd_z	256
#define      pswd	((&data[977]))
	"\373\226\272\231\262\147\254\044\221\346\223\121\172\027\163\230"
	"\136\302\065\076\114\034\315\236\375\150\177\073\122\007\201\116"
	"\235\073\030\260\336\131\351\160\101\154\316\212\330\273\363\340"
	"\265\017\012\242\265\145\045\050\277\171\244\025\325\232\011\251"
	"\355\041\131\314\173\102\075\274\257\013\107\207\307\072\147\174"
	"\112\162\036\377\330\104\050\227\276\315\254\223\147\265\074\125"
	"\327\226\041\122\331\136\017\210\152\126\020\062\221\170\257\334"
	"\353\316\334\303\022\004\132\320\321\007\144\071\275\241\216\224"
	"\067\257\347\021\016\367\231\171\116\252\253\337\042\133\274\015"
	"\051\230\321\073\234\053\014\156\063\161\247\360\022\066\205\111"
	"\346\155\132\364\144\364\156\262\237\032\222\302\165\116\320\236"
	"\346\241\332\203\315\347\362\000\130\232\361\152\320\166\264\266"
	"\343\017\253\110\004\031\373\243\064\215\145\251\334\065\110\303"
	"\326\043\107\243\012\071\244\143\324\225\316\244\014\202\133\357"
	"\222\006\070\226\040\063\071\124\301\237\375\235\324\106\141\253"
	"\151\250\116\164\342\363\330\266\210\246\132\224\050\265\204\272"
	"\274\274\121\334\360\213\060\261\052\056\117\376\164\261\252\336"
	"\131\370\123\073\353\053\361\164\321\114\010\372\001\215\265\276"
	"\111\006\347\120\243\223\165\064\172\010\205\364\040\370\215\176"
	"\273\302\274"
#define      msg1_z	42
#define      msg1	((&data[1259]))
	"\246\333\362\045\027\105\054\230\224\054\125\073\151\000\077\205"
	"\020\203\026\217\126\144\336\253\365\162\300\256\064\074\303\163"
	"\246\013\371\256\272\172\104\352\304\367\057\017\330\032\154\064"
	"\303\373\342\312\323\174\033\167"
#define      date_z	1
#define      date	((&data[1306]))
	"\024"
#define      rlax_z	1
#define      rlax	((&data[1307]))
	"\077"
#define      opts_z	1
#define      opts	((&data[1308]))
	"\226"
#define      shll_z	10
#define      shll	((&data[1309]))
	"\374\320\350\000\132\102\335\066\106\300\316\364"
#define      xecc_z	15
#define      xecc	((&data[1323]))
	"\223\207\207\265\170\155\143\072\027\345\252\210\203\076\311\374"
	"\000\161"
#define      lsto_z	1
#define      lsto	((&data[1339]))
	"\060"/* End of data[] */;
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
