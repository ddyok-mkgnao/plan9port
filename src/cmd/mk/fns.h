void	addrule(char*, Word*, char*, Word*, int, int, char*);
void	addrules(Word*, Word*, char*, int, int, char*);
void	addw(Word*, char*);
void	assert(char*, int);
int	assline(Biobuf *, Bufblock *);
long	atimeof(int,char*);
void	atouch(char*);
void	bufcpy(Bufblock *, char *, int);
Envy	*buildenv(Job*, int);
void	catchnotes(void);
char 	*charin(char *, char *);
int	chgtime(char*);
void	clrmade(Node*);
char	*copyq(char*, Rune, Bufblock*);
void	delete(char*);
void	delword(Word*);
int	dorecipe(Node*);
void	dumpa(char*, Arc*);
void	dumpj(char*, Job*, int);
void	dumpn(char*, Node*);
void	dumpr(char*, Rule*);
void	dumpv(char*);
void	dumpw(char*, Word*);
int	escapetoken(Biobuf*, Bufblock*, int, int);
void	execinit(void);
int	execsh(char*, char*, Bufblock*, Envy*);
void	Exit(void);
char	*expandquote(char*, Rune, Bufblock*);
void	expunge(int, char*);
void	freebuf(Bufblock*);
void	front(char*);
Node	*graph(char*);
void	growbuf(Bufblock *);
void	initenv(void);
void	insert(Bufblock *, int);
void	ipop(void);
void	ipush(void);
void	killchildren(char*);
void	*Malloc(int);
char	*maketmp(int*);
int	match(char*, char*, char*);
char *membername(char*, int, char*);
void	mk(char*);
ulong	mkmtime(char*);
long	mtime(char*);
Arc	*newarc(Node*, Rule*, char*, Resub*);
Bufblock *newbuf(void);
Job	*newjob(Rule*, Node*, char*, char**, Word*, Word*, Word*, Word*);
Word	*newword(char*);
int	nextrune(Biobuf*, int);
int	nextslot(void);
void	nproc(void);
void	nrep(void);
int	outofdate(Node*, Arc*, int);
void	parse(char*, int, int);
int	pipecmd(char*, Envy*, int*);
void	prusage(void);
void	rcopy(char**, Resub*, int);
void	readenv(void);
void	*Realloc(void*, int);
void	rinsert(Bufblock *, Rune);
char	*rulecnt(void);
void	run(Job*);
void	setvar(char*, void*);
char	*shname(char*);
void	shprint(char*, Envy*, Bufblock*);
Word	*stow(char*);
void	subst(char*, char*, char*);
void	symdel(char*, int);
void	syminit(void);
Symtab	*symlook(char*, int, void*);
void	symstat(void);
void	symtraverse(int, void(*)(Symtab*));
void	timeinit(char*);
long	timeof(char*, int);
void	touch(char*);
void	update(int, Node*);
void	usage(void);
Word	*varsub(char**);
int	waitfor(char*);
int	waitup(int, int*);
Word	*wdup(Word*);
int	work(Node*, Node*, Arc*);
char	*wtos(Word*, int);
