struct state_t;

struct state_t *setupNodesAndTransistors(netlist_transdefs *transdefs, BOOL *node_is_pullup, nodenum_t nodes, nodenum_t transistors, nodenum_t vss, nodenum_t vcc);
void setNode(struct state_t *state, nodenum_t nn, BOOL s);
BOOL isNodeHigh(struct state_t *state, nodenum_t nn);
unsigned int readNodes(struct state_t *state, int count, nodenum_t *nodelist);
void writeNodes(struct state_t *state, int count, nodenum_t *nodelist, int v);

void recalcNodeList(struct state_t *state);
void stabilizeChip(struct state_t *state);
