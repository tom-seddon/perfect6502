struct state_t;
typedef struct state_t state_t;

extern state_t *initAndResetChip();
extern void step(state_t *state);
extern void chipStatus(state_t *state);
extern unsigned short readPC(state_t *state);
extern unsigned char readA(state_t *state);
extern unsigned char readX(state_t *state);
extern unsigned char readY(state_t *state);
extern unsigned char readSP(state_t *state);
extern unsigned char readP(state_t *state);
extern unsigned int readRW(state_t *state);
extern unsigned short readAddressBus(state_t *state);
extern void writeDataBus(state_t *state, unsigned char);
extern unsigned char readDataBus(state_t *state);
extern unsigned char readIR(state_t *state);
extern int isPhi2(state_t *state);
extern int isRead(state_t *state);

extern void setIRQ(state_t *state, int value);

extern unsigned char p6502_memory[65536];
extern unsigned int p6502_cycle;
//extern unsigned int transistors;
