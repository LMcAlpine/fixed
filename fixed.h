#define FRACBITS 16
#define FRACUNIT (1<<FRACBITS) // 65536

typedef int fixed_t;

fixed_t FixedMul(fixed_t a, fixed_t b);
fixed_t FixedDiv(fixed_t a, fixed_t b);
fixed_t FixedDiv2(fixed_t a, fixed_t b);

fixed_t ConvertToFixed(float num);