#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 315
static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern int memcmp(const void *arg_0x7f54917e42f8, const void *arg_0x7f54917e45d0, size_t arg_0x7f54917e4878) __attribute((__pure__)) ;




extern void *memset(void *arg_0x7f54917dd020, int arg_0x7f54917dd288, size_t arg_0x7f54917dd530);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7f54917bc838, const void *arg_0x7f54917bcb10);
# 25 "/opt/tinyos-2.1.2/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-2.1.2/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "/opt/tinyos-2.1.2/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.1.2/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 4 "build/iris/StorageVolumes.h"
enum __nesc_unnamed4313 {
  VOLUME_BLOCKTEST
};
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4314 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 52 "/opt/tinyos-2.1.2/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4315 {
  SEEK_BEGINNING = 0
};
# 47 "/opt/tinyos-2.1.2/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4316 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4317 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 49 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4318 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 41 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_DEFAULT = 11, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 42 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4319 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 90
typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.1.2/tos/types/IeeeEui64.h"
enum __nesc_unnamed4320 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.1.2/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4321 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4322 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4323 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4324 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 6 "/opt/tinyos-2.1.2/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4325 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4326 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 58 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rf230packet_header_t;




#line 60
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 76
#line 65
typedef struct rf230packet_metadata_t {





  link_metadata_t link;

  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} rf230packet_metadata_t;
# 83 "/opt/tinyos-2.1.2/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4327 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4328 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4329 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 43 "/opt/tinyos-2.1.2/tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.2/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[112];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 33 "/opt/tinyos-2.1.2/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4330 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4331 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4332 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4333 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4334 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4335 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4336 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4337 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
enum /*RandRWAppC.BlockStorageC*/BlockStorageC__0____nesc_unnamed4338 {
  BlockStorageC__0__BLOCK_ID = 0U + 0U, BlockStorageC__0__RESOURCE_ID = 0U
};
typedef TMicro At45dbP__BusyWait__precision_tag;
typedef uint16_t At45dbP__BusyWait__size_type;
typedef TMicro HplAt45dbIOP__BusyWait__precision_tag;
typedef uint16_t HplAt45dbIOP__BusyWait__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer3P__Capture__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RandRWC__Boot__booted(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void RandRWC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void RandRWC__SerialControl__startDone(error_t error);
#line 138
static void RandRWC__SerialControl__stopDone(error_t error);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void RandRWC__BlockRead__computeCrcDone(storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void RandRWC__BlockRead__readDone(storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void RandRWC__BlockWrite__syncDone(error_t error);
#line 71
static void RandRWC__BlockWrite__writeDone(storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void RandRWC__BlockWrite__eraseDone(error_t error);
# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void BlockStorageP__At45db__copyPageDone(error_t error);
#line 136
static void BlockStorageP__At45db__syncDone(error_t error);
#line 154
static void BlockStorageP__At45db__flushDone(error_t error);
#line 80
static void BlockStorageP__At45db__writeDone(error_t error);
#line 116
static void BlockStorageP__At45db__eraseDone(error_t error);
#line 194
static void BlockStorageP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void BlockStorageP__At45db__readDone(error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__syncDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__default__writeDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t BlockStorageP__BlockWrite__erase(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__eraseDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t BlockStorageP__BlockWrite__write(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t BlockStorageP__BlockWrite__sync(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t BlockStorageP__BlockRead__read(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void BlockStorageP__BlockRead__default__computeCrcDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);






static storage_len_t BlockStorageP__BlockRead__getSize(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__default__readDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 50 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__npages(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__flipped(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__isConfig(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__writeHook(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 58 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__remap(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30, 
# 58 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t page);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__volumeSize(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f54915454c8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__remap(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f54915454c8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__release(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f5491544340);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__request(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f5491544340);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void BlockStorageP__Resource__granted(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f5491544340);
# 163 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void At45dbP__HplAt45db__flushDone(void );
#line 185
static void At45dbP__HplAt45db__writeDone(void );
#line 35
static void At45dbP__HplAt45db__waitIdleDone(void );
#line 47
static void At45dbP__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void At45dbP__HplAt45db__eraseDone(void );
#line 93
static void At45dbP__HplAt45db__compareDone(void );
#line 61
static void At45dbP__HplAt45db__fillDone(void );
#line 141
static void At45dbP__HplAt45db__readDone(void );
# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 131
static void At45dbP__At45db__syncAll(void );
#line 73
static void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 187
static void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void At45dbP__taskSuccess__runTask(void );
#line 75
static void At45dbP__taskFail__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t At45dbP__Init__init(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );
#line 100
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );
#line 73
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
#line 55
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
#line 31
static void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 47
static void HplAt45dbIOP__HplAt45dbByte__select(void );




static void HplAt45dbIOP__HplAt45dbByte__deselect(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HplAt45dbIOP__avail__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HplAt45dbIOP__Init__init(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t tx);
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );





static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );
#line 67
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f5491689ab0);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f5491689ab0);
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115f7e8);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115c9b8);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115c9b8);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f5491160640);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f5491160640);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f5491160640);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(
# 18 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7f549110d5d8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(
# 18 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7f549110d5d8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 56
static void LedsP__Leds__led0On(void );
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a8ba8, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(
# 47 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a8ba8, 
# 132 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 110
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(
# 47 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a8ba8, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 126 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a5cd0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6f748, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6f748, 
# 96 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f72c38, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8, 
# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8);
# 23 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8, 
# 23 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 83 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__default__fired(void );
# 47 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm1281Timer3P__Capture__size_type HplAtm1281Timer3P__Capture__get(void );
#line 60
static void HplAtm1281Timer3P__Capture__default__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__default__fired(void );
# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer3P__Timer__set(HplAtm1281Timer3P__Timer__timer_size t);










static void HplAtm1281Timer3P__Timer__start(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t RandRWC__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

RandRWC__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t RandRWC__SerialControl__start(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t RandRWC__BlockRead__read(storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t RandRWC__BlockWrite__erase(void );
#line 58
static error_t RandRWC__BlockWrite__write(storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t RandRWC__BlockWrite__sync(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void RandRWC__Leds__led1On(void );
#line 100
static void RandRWC__Leds__led2Toggle(void );
#line 56
static void RandRWC__Leds__led0On(void );
# 27 "RandRWC.nc"
enum RandRWC____nesc_unnamed4339 {
  RandRWC__SIZE = 1024L * 256, 
  RandRWC__NWRITES = RandRWC__SIZE / 4096
};

uint16_t RandRWC__shiftReg;
uint16_t RandRWC__initSeed;
uint16_t RandRWC__mask;


static uint16_t RandRWC__rand(void );
#line 53
static void RandRWC__resetSeed(void );





uint8_t RandRWC__data[512];
#line 59
uint8_t RandRWC__rdata[512];
int RandRWC__count;
#line 60
int RandRWC__testCount;
uint32_t RandRWC__addr;
#line 61
uint32_t RandRWC__len;
uint16_t RandRWC__offset;
message_t RandRWC__reportMsg;

static void RandRWC__done(void );

static void RandRWC__report(error_t e);







static inline void RandRWC__AMSend__sendDone(message_t *msg, error_t error);




static inline void RandRWC__fail(error_t e);




static inline void RandRWC__success(void );




static bool RandRWC__scheck(error_t r) __attribute((noinline)) ;





static inline bool RandRWC__bcheck(bool b);





static void RandRWC__setParameters(void );









static inline void RandRWC__Boot__booted(void );



static inline void RandRWC__SerialControl__stopDone(error_t e);

static inline void RandRWC__SerialControl__startDone(error_t e);
#line 134
static void RandRWC__nextRead(void );









static void RandRWC__nextWrite(void );
#line 157
static inline void RandRWC__BlockWrite__writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result);




static inline void RandRWC__BlockWrite__eraseDone(error_t result);







static inline void RandRWC__BlockWrite__syncDone(error_t result);




static void RandRWC__BlockRead__readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;





static inline void RandRWC__BlockRead__computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result);


enum RandRWC____nesc_unnamed4340 {
#line 184
  RandRWC__A_READ = 2, RandRWC__A_WRITE
};
static void RandRWC__doAction(int act);
#line 201
const uint8_t RandRWC__actions[2] = { 
RandRWC__A_WRITE, 
RandRWC__A_READ };


static void RandRWC__done(void );
# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 131
static void BlockStorageP__At45db__syncAll(void );
#line 73
static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 187
static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__syncDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__writeDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlockStorageP__BlockWrite__eraseDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155f680, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__computeCrcDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void BlockStorageP__BlockRead__readDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549155ead8, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__flipped(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__isConfig(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__writeHook(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f549153be30);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__volumeSize(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f54915454c8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__remap(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f54915454c8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__release(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f5491544340);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__request(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7f5491544340);
#line 87
enum BlockStorageP____nesc_unnamed4341 {
  BlockStorageP__R_IDLE, 
  BlockStorageP__R_WRITE, 
  BlockStorageP__R_ERASE, 
  BlockStorageP__R_SYNC, 
  BlockStorageP__R_READ, 
  BlockStorageP__R_CRC
};

enum BlockStorageP____nesc_unnamed4342 {
  BlockStorageP__N = 1U + 0U, 
  BlockStorageP__NO_CLIENT = 0xff
};

uint8_t BlockStorageP__client = BlockStorageP__NO_CLIENT;
storage_addr_t BlockStorageP__currentOffset;







#line 104
struct BlockStorageP____nesc_unnamed4343 {

  uint8_t request;
  uint8_t * buf;
  storage_addr_t addr;
  storage_len_t len;
} BlockStorageP__s[BlockStorageP__N];






static inline at45page_t BlockStorageP__pageRemap(at45page_t p);



static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id);



static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page);





static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId);



static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId);







static inline void BlockStorageP__eraseStart(void );
static inline void BlockStorageP__syncStart(void );
static inline void BlockStorageP__multipageStart(uint16_t crc);

static inline void BlockStorageP__startRequest(void );
#line 161
static void BlockStorageP__endRequest(error_t result, uint16_t crc);
#line 189
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len);
#line 215
static inline void BlockStorageP__Resource__granted(uint8_t blockId);
#line 229
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId);
#line 246
static void BlockStorageP__multipageContinue(uint16_t crc);
#line 280
static inline void BlockStorageP__multipageStart(uint16_t crc);




static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc);










static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id);



static inline void BlockStorageP__eraseStart(void );



static inline void BlockStorageP__eraseEraseDone(error_t error);







static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id);



static inline void BlockStorageP__syncStart(void );



static inline void BlockStorageP__syncSyncDone(error_t error);







static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);
#line 352
static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId);
#line 367
static inline void BlockStorageP__At45db__writeDone(error_t result);




static inline void BlockStorageP__At45db__readDone(error_t result);




static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc);




static inline void BlockStorageP__At45db__eraseDone(error_t result);




static inline void BlockStorageP__At45db__syncDone(error_t result);




static inline void BlockStorageP__At45db__flushDone(error_t result);
static inline void BlockStorageP__At45db__copyPageDone(error_t error);
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result);

static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage);
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id);
static inline error_t BlockStorageP__Resource__default__request(uint8_t id);
static inline error_t BlockStorageP__Resource__default__release(uint8_t id);
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page);
#line 41
static void At45dbP__HplAt45db__waitCompare(void );
#line 100
static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void At45dbP__HplAt45db__waitIdle(void );
#line 73
static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__copyPageDone(error_t error);
#line 136
static void At45dbP__At45db__syncDone(error_t error);
#line 154
static void At45dbP__At45db__flushDone(error_t error);
#line 80
static void At45dbP__At45db__writeDone(error_t error);
#line 116
static void At45dbP__At45db__eraseDone(error_t error);
#line 194
static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void At45dbP__At45db__readDone(error_t error);
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t At45dbP__taskSuccess__postTask(void );
#line 67
static error_t At45dbP__taskFail__postTask(void );
# 145 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
enum At45dbP____nesc_unnamed4344 {
#line 145
  At45dbP__taskSuccess = 0U
};
#line 145
typedef int At45dbP____nesc_sillytask_taskSuccess[At45dbP__taskSuccess];


enum At45dbP____nesc_unnamed4345 {
#line 148
  At45dbP__taskFail = 1U
};
#line 148
typedef int At45dbP____nesc_sillytask_taskFail[At45dbP__taskFail];
#line 80
enum At45dbP____nesc_unnamed4346 {
  At45dbP__IDLE, 
  At45dbP__R_READ, 
  At45dbP__R_READCRC, 
  At45dbP__R_WRITE, 
  At45dbP__R_ERASE, 
  At45dbP__R_COPY, 
  At45dbP__R_SYNC, 
  At45dbP__R_SYNCALL, 
  At45dbP__R_FLUSH, 
  At45dbP__R_FLUSHALL, 
  At45dbP__BROKEN
};
uint8_t At45dbP__request;
at45pageoffset_t At45dbP__reqOffset;
#line 94
at45pageoffset_t At45dbP__reqBytes;
uint8_t * At45dbP__reqBuf;
at45page_t At45dbP__reqPage;

enum At45dbP____nesc_unnamed4347 {
  At45dbP__P_READ, 
  At45dbP__P_READCRC, 
  At45dbP__P_WRITE, 
  At45dbP__P_FLUSH, 
  At45dbP__P_FILL, 
  At45dbP__P_ERASE, 
  At45dbP__P_COMPARE, 
  At45dbP__P_COMPARE_CHECK
};







#line 109
struct At45dbP____nesc_unnamed4348 {
  at45page_t page;
  bool busy : 1;
  bool clean : 1;
  bool erased : 1;
  uint8_t unchecked : 2;
} At45dbP__buffer[2];
uint8_t At45dbP__selected;
uint8_t At45dbP__checking;
bool At45dbP__flashBusy;





static inline error_t At45dbP__Init__init(void );
#line 138
static void At45dbP__flashIdle(void );



static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
static void At45dbP__handleRWRequest(void );

static inline void At45dbP__taskSuccess__runTask(void );


static inline void At45dbP__taskFail__runTask(void );



static void At45dbP__checkBuffer(uint8_t buf);









static void At45dbP__flushBuffer(void );
#line 174
static inline void At45dbP__HplAt45db__waitIdleDone(void );
#line 186
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok);
#line 201
static inline void At45dbP__HplAt45db__readDone(void );



static inline void At45dbP__HplAt45db__writeDone(void );





static inline void At45dbP__HplAt45db__crcDone(uint16_t crc);



static inline void At45dbP__HplAt45db__flushDone(void );







static inline void At45dbP__HplAt45db__compareDone(void );










static inline void At45dbP__HplAt45db__fillDone(void );







static inline void At45dbP__HplAt45db__eraseDone(void );










static void At45dbP__syncOrFlushAll(uint8_t newReq);

static void At45dbP__handleRWRequest(void );
#line 361
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 377
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n);
#line 407
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);



static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc);




static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);




static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 460
static void At45dbP__syncOrFlushAll(uint8_t newReq);
#line 477
static inline void At45dbP__At45db__syncAll(void );
# 141 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void );
#line 163
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void );
#line 185
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void );
#line 35
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void );
#line 93
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void );
#line 61
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void );
#line 31
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void );




static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx);
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0____nesc_unnamed4349 {
  HplAt45dbByteC__0__P_IDLE, 
  HplAt45dbByteC__0__P_SEND_CMD, 
  HplAt45dbByteC__0__P_READ, 
  HplAt45dbByteC__0__P_READ_CRC, 
  HplAt45dbByteC__0__P_WRITE, 
  HplAt45dbByteC__0__P_WAIT_IDLE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE_OK, 
  HplAt45dbByteC__0__P_FILL, 
  HplAt45dbByteC__0__P_FLUSH, 
  HplAt45dbByteC__0__P_COMPARE, 
  HplAt45dbByteC__0__P_ERASE
};
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[9];
at45pageoffset_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
uint8_t * /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc);
#line 86
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void );





static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void );
#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
#line 173
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount);
#line 191
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
#line 217
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);









static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__In__makeInput(void );
#line 43
static bool HplAt45dbIOP__In__get(void );
#line 41
static void HplAt45dbIOP__In__clr(void );
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Out__makeOutput(void );
#line 40
static void HplAt45dbIOP__Out__set(void );





static void HplAt45dbIOP__Select__makeOutput(void );
#line 40
static void HplAt45dbIOP__Select__set(void );
static void HplAt45dbIOP__Select__clr(void );
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static void HplAt45dbIOP__HplAt45dbByte__idle(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Clk__makeOutput(void );
#line 40
static void HplAt45dbIOP__Clk__set(void );
static void HplAt45dbIOP__Clk__clr(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HplAt45dbIOP__avail__postTask(void );
# 163 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP____nesc_unnamed4350 {
#line 163
  HplAt45dbIOP__avail = 2U
};
#line 163
typedef int HplAt45dbIOP____nesc_sillytask_avail[HplAt45dbIOP__avail];
#line 108
static inline error_t HplAt45dbIOP__Init__init(void );
#line 120
static inline void HplAt45dbIOP__HplAt45dbByte__select(void );




static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void );
#line 142
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut);
#line 163
static inline void HplAt45dbIOP__avail__runTask(void );



static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 183
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 67 "/opt/tinyos-2.1.2/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4351 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 154
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 40 "/opt/tinyos-2.1.2/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void );
# 25 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_unnamed4352 {
#line 25
  NoArbiterC__0__granted = 3U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted];
#line 25
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );




static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );









static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );








static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f5491689ab0);
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4353 {

  SchedulerBasicP__NUM_TASKS = 11U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 99 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 147
static inline void McuSleepC__McuSleep__sleep(void );
#line 161
static inline void McuSleepC__McuPowerState__update(void );


static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4354 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115f7e8);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115c9b8);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f549115c9b8);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7f5491160640);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4355 {
#line 75
  ArbiterP__0__grantedTask = 4U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4356 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4357 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4358 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );





static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 21 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage);








static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );
#line 89
static inline void LedsP__Leds__led1On(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a8ba8, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f54910a5cd0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4359 {
#line 191
  SerialP__RunTx = 5U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4360 {
#line 322
  SerialP__startDoneTask = 6U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4361 {
#line 332
  SerialP__stopDoneTask = 7U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4362 {
#line 341
  SerialP__defaultSerialFlushTask = 8U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4363 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4364 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4365 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4366 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4367 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4368 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4369 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4370 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6f748, 
# 96 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f72c38, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8, 
# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8);
# 23 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f5490f6eaa8, 
# 23 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4371 {
#line 158
  SerialDispatcherP__0__signalSendDone = 9U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4372 {
#line 275
  SerialDispatcherP__0__receiveTask = 10U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4373 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4374 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4375 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4376 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 130 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 150
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 207
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 308
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__overflow(void );
# 93 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x);
#line 164
static inline void HplAtm1281Timer3P__Timer__start(void );
#line 219
static inline uint16_t HplAtm1281Timer3P__Capture__get(void );





static inline void HplAtm1281Timer3P__CompareA__default__fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareB__default__fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareC__default__fired(void );
void __vector_34(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_35(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4377 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 51 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 94 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 2);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 3;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 3;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 5);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr();
#line 41
}
#line 41
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 3;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 3;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput();
#line 46
}
#line 46
# 108 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline error_t HplAt45dbIOP__Init__init(void )
#line 108
{
  HplAt45dbIOP__Select__makeOutput();
  HplAt45dbIOP__Select__set();
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Clk__makeOutput();
  HplAt45dbIOP__Out__set();
  HplAt45dbIOP__Out__makeOutput();
  HplAt45dbIOP__In__clr();
  HplAt45dbIOP__In__makeInput();
  return SUCCESS;
}

# 126 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x91 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x91;
}

#line 102
static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer3P__TimerCtrl__setControlB(x.flat);
}

# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer3P__Timer__start();
#line 78
}
#line 78
# 93 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x94 = t;
}

# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAt45dbIOP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "/opt/tinyos-2.1.2/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 60 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 75 "RandRWC.nc"
static inline void RandRWC__AMSend__sendDone(message_t *msg, error_t error)
#line 75
{
  if (error != SUCCESS) {
    RandRWC__Leds__led0On();
    }
}

# 105 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result)
#line 105
{
  return;
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7f54910a8ba8, message_t * msg, error_t error){
#line 110
  switch (arg_0x7f54910a8ba8) {
#line 110
    case 139:
#line 110
      RandRWC__AMSend__sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x7f54910a8ba8, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 101 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7f5490f6f748, message_t * msg, error_t error){
#line 100
  switch (arg_0x7f5490f6f748) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7f5490f6f748, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7f54910a5cd0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7f54910a5cd0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7f5490f72c38, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7f5490f72c38) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7f5490f72c38, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7f5490f6eaa8, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7f5490f6eaa8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7f5490f6eaa8, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7f5490f6eaa8){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7f5490f6eaa8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7f5490f6eaa8);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "RandRWC.nc"
static inline void RandRWC__SerialControl__stopDone(error_t e)
#line 116
{
}

# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  RandRWC__SerialControl__stopDone(error);
#line 138
}
#line 138
# 161 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 161
{
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 168 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 168
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 156 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 156
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 97 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 118 "RandRWC.nc"
static inline void RandRWC__SerialControl__startDone(error_t e)
#line 118
{
  int i;

  if (e != SUCCESS) 
    {
      RandRWC__Leds__led0On();
      return;
    }

  RandRWC__resetSeed();
  for (i = 0; i < sizeof RandRWC__data; i++) 
    RandRWC__data[i++] = RandRWC__rand() >> 8;

  RandRWC__done();
}

# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  RandRWC__SerialControl__startDone(error);
#line 113
}
#line 113
# 185 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 185
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 162 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 162
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 150 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 150
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 190 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 190
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 180 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 180
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 131 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 112;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(m, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * RandRWC__AMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(139, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 538 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-2.1.2/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7f5490f6eaa8, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7f5490f6eaa8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7f5490f6eaa8, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 68 "/opt/tinyos-2.1.2/tos/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t RandRWC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(139, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 296 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id)
#line 296
{
  return BlockStorageP__newRequest(BlockStorageP__R_ERASE, id, 0, (void *)0, 0);
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__erase(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = BlockStorageP__BlockWrite__erase(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 10 "build/iris/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return 1024;
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 401 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id)
#line 401
{
#line 401
  return 0;
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__volumeSize(uint8_t arg_0x7f54915454c8){
#line 30
  unsigned short __nesc_result;
#line 30

#line 30
  switch (arg_0x7f54915454c8) {
#line 30
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      __nesc_result = BlockStorageP__At45dbVolume__default__volumeSize(arg_0x7f54915454c8);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 121 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id)
#line 121
{
  return BlockStorageP__At45dbVolume__volumeSize(id) >> 1;
}







static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId)
#line 131
{
  return FALSE;
}

# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__isConfig(uint8_t arg_0x7f549153be30){
#line 24
  int __nesc_result;
#line 24

#line 24
    __nesc_result = BlockStorageP__BConfig__default__isConfig(arg_0x7f549153be30);
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 352 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId)
#line 352
{
  storage_len_t vsize;

  if (BlockStorageP__BConfig__isConfig(blockId)) {
    vsize = BlockStorageP__BConfig__npages(blockId);
    }
  else {
#line 358
    vsize = BlockStorageP__At45dbVolume__volumeSize(blockId);
    }
  return vsize << AT45_PAGE_SIZE_LOG2;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7f549115f7e8){
#line 53
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7f549115f7e8);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 402 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__Resource__default__request(uint8_t id)
#line 402
{
#line 402
  return FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__request(uint8_t arg_0x7f5491544340){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7f5491544340) {
#line 88
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = BlockStorageP__Resource__default__request(arg_0x7f5491544340);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 336 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 336
{
  return BlockStorageP__newRequest(BlockStorageP__R_READ, id, addr, buf, len);
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static error_t RandRWC__BlockRead__read(storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = BlockStorageP__BlockRead__read(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 1);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 85 "RandRWC.nc"
static inline void RandRWC__success(void )
#line 85
{
  RandRWC__Leds__led1On();
  RandRWC__report(0x80);
}

# 56 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 174 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 174
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 280 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageStart(uint16_t crc)
#line 280
{
  BlockStorageP__currentOffset = 0;
  BlockStorageP__multipageContinue(crc);
}

# 477 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__syncAll(void )
#line 477
{
  At45dbP__syncOrFlushAll(At45dbP__R_SYNCALL);
}

# 131 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__syncAll(void ){
#line 131
  At45dbP__At45db__syncAll();
#line 131
}
#line 131
# 324 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncStart(void )
#line 324
{
  BlockStorageP__At45db__syncAll();
}

#line 117
static inline at45page_t BlockStorageP__pageRemap(at45page_t p)
#line 117
{
  return BlockStorageP__BConfig__remap(BlockStorageP__client, p);
}

# 426 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind)
#line 426
{
  At45dbP__newRequest(At45dbP__R_ERASE, page, eraseKind, (void *)0, 0);
}

# 111 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind){
#line 111
  At45dbP__At45db__erase(page, eraseKind);
#line 111
}
#line 111
# 300 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseStart(void )
#line 300
{
  BlockStorageP__At45db__erase(BlockStorageP__pageRemap(0), AT45_ERASE);
}

#line 147
static inline void BlockStorageP__startRequest(void )
#line 147
{
  switch (BlockStorageP__s[BlockStorageP__client].request) 
    {
      case BlockStorageP__R_ERASE: 
        BlockStorageP__eraseStart();
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__syncStart();
      break;
      default: 
        BlockStorageP__multipageStart((uint16_t )BlockStorageP__s[BlockStorageP__client].buf);
    }
}

#line 229
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId)
#line 229
{
  return FALSE;
}

# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__writeHook(uint8_t arg_0x7f549153be30){
#line 37
  int __nesc_result;
#line 37

#line 37
    __nesc_result = BlockStorageP__BConfig__default__writeHook(arg_0x7f549153be30);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 215 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__Resource__granted(uint8_t blockId)
#line 215
{
  BlockStorageP__client = blockId;

  if (BlockStorageP__s[blockId].request == BlockStorageP__R_WRITE && 
  BlockStorageP__BConfig__writeHook(blockId)) 
    {


      BlockStorageP__client = BlockStorageP__NO_CLIENT;
      return;
    }
  BlockStorageP__startRequest();
}

# 202 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7f5491160640){
#line 102
  switch (arg_0x7f5491160640) {
#line 102
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID:
#line 102
      BlockStorageP__Resource__granted(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7f5491160640);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7f549115c9b8){
#line 59
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7f549115c9b8);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskFail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskFail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 30 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void )
#line 30
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask();
  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 191 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void )
#line 191
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitIdle(void ){
#line 30
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle();
#line 30
}
#line 30
# 229 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page)
#line 229
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE, cmd, 0, page, 0, (void *)0, 1);
}

# 100 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(cmd, page);
#line 100
}
#line 100
# 285 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc)
#line 285
{
  if (result != SUCCESS) {
    BlockStorageP__endRequest(result, 0);
    }
  else {
#line 289
    BlockStorageP__multipageContinue(crc);
    }
}

#line 372
static inline void BlockStorageP__At45db__readDone(error_t result)
#line 372
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 173 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__readDone(error_t error){
#line 173
  BlockStorageP__At45db__readDone(error);
#line 173
}
#line 173
# 208 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7f549115c9b8){
#line 65
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7f549115c9b8);
#line 65
}
#line 65
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 403 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__Resource__default__release(uint8_t id)
#line 403
{
#line 403
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__release(uint8_t arg_0x7f5491544340){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7f5491544340) {
#line 120
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__RESOURCE_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = BlockStorageP__Resource__default__release(arg_0x7f5491544340);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 397 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 397
{
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__readDone(uint8_t arg_0x7f549155ead8, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x7f549155ead8) {
#line 67
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 67
      RandRWC__BlockRead__readDone(addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      BlockStorageP__BlockRead__default__readDone(arg_0x7f549155ead8, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 80 "RandRWC.nc"
static inline void RandRWC__fail(error_t e)
#line 80
{
  RandRWC__Leds__led0On();
  RandRWC__report(e);
}

#line 96
static inline bool RandRWC__bcheck(bool b)
#line 96
{
  if (!b) {
    RandRWC__fail(FAIL);
    }
#line 99
  return b;
}

#line 157
static inline void RandRWC__BlockWrite__writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result)
#line 157
{
  if (RandRWC__scheck(result)) {
    RandRWC__nextWrite();
    }
}

# 394 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 394
{
}

# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__writeDone(uint8_t arg_0x7f549155f680, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x7f549155f680) {
#line 71
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 71
      RandRWC__BlockWrite__writeDone(addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      BlockStorageP__BlockWrite__default__writeDone(arg_0x7f549155f680, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 320 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id)
#line 320
{
  return BlockStorageP__newRequest(BlockStorageP__R_SYNC, id, 0, (void *)0, 0);
}

# 103 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__sync(void ){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  __nesc_result = BlockStorageP__BlockWrite__sync(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 312 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 312
{
  return BlockStorageP__newRequest(BlockStorageP__R_WRITE, id, addr, buf, len);
}

# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t RandRWC__BlockWrite__write(storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = BlockStorageP__BlockWrite__write(/*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 42
}
#line 42
# 114 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 162 "RandRWC.nc"
static inline void RandRWC__BlockWrite__eraseDone(error_t result)
#line 162
{
  if (RandRWC__scheck(result)) 
    {
      RandRWC__Leds__led2Toggle();
      RandRWC__nextWrite();
    }
}

# 395 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result)
#line 395
{
}

# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__eraseDone(uint8_t arg_0x7f549155f680, error_t error){
#line 91
  switch (arg_0x7f549155f680) {
#line 91
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 91
      RandRWC__BlockWrite__eraseDone(error);
#line 91
      break;
#line 91
    default:
#line 91
      BlockStorageP__BlockWrite__default__eraseDone(arg_0x7f549155f680, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 181 "RandRWC.nc"
static inline void RandRWC__BlockRead__computeCrcDone(storage_addr_t x, storage_len_t y, uint16_t z, error_t result)
#line 181
{
}

# 398 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result)
#line 398
{
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__computeCrcDone(uint8_t arg_0x7f549155ead8, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x7f549155ead8) {
#line 95
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 95
      RandRWC__BlockRead__computeCrcDone(addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      BlockStorageP__BlockRead__default__computeCrcDone(arg_0x7f549155ead8, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 170 "RandRWC.nc"
static inline void RandRWC__BlockWrite__syncDone(error_t result)
#line 170
{
  if (RandRWC__scheck(result)) {
    RandRWC__done();
    }
}

# 396 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result)
#line 396
{
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__syncDone(uint8_t arg_0x7f549155f680, error_t error){
#line 112
  switch (arg_0x7f549155f680) {
#line 112
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 112
      RandRWC__BlockWrite__syncDone(error);
#line 112
      break;
#line 112
    default:
#line 112
      BlockStorageP__BlockWrite__default__syncDone(arg_0x7f549155f680, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 135 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId)
#line 135
{
  return FALSE;
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__flipped(uint8_t arg_0x7f549153be30){
#line 30
  int __nesc_result;
#line 30

#line 30
    __nesc_result = BlockStorageP__BConfig__default__flipped(arg_0x7f549153be30);
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 21 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 14 "build/iris/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return volumePage + 0;
# 26 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 400 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage)
#line 400
{
#line 400
  return 0;
}

# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__remap(uint8_t arg_0x7f54915454c8, at45page_t volumePage){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  switch (arg_0x7f54915454c8) {
#line 24
    case /*RandRWAppC.BlockStorageC*/BlockStorageC__0__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(0, volumePage);
#line 24
      break;
#line 24
    default:
#line 24
      __nesc_result = BlockStorageP__At45dbVolume__default__remap(arg_0x7f54915454c8, volumePage);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 420 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 421
{
  At45dbP__newRequest(At45dbP__R_WRITE, page, offset, reqdata, n);
}

# 73 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 73
  At45dbP__At45db__write(page, offset, data, n);
#line 73
}
#line 73
# 407 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 408
{
  At45dbP__newRequest(At45dbP__R_READ, page, offset, reqdata, n);
}

# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 166
  At45dbP__At45db__read(page, offset, data, n);
#line 166
}
#line 166
# 412 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc)
#line 415
{

  At45dbP__newRequest(At45dbP__R_READCRC, page, offset, (uint8_t * )baseCrc, n);
}

# 187 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 187
  At45dbP__At45db__computeCrc(page, offset, n, baseCrc);
#line 187
}
#line 187
# 377 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc)
#line 377
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, newCrc);
    }
}

# 194 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc){
#line 194
  BlockStorageP__At45db__computeCrcDone(error, crc);
#line 194
}
#line 194
# 367 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__writeDone(error_t result)
#line 367
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 80 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__writeDone(error_t error){
#line 80
  BlockStorageP__At45db__writeDone(error);
#line 80
}
#line 80
# 328 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncSyncDone(error_t error)
#line 328
{
  BlockStorageP__endRequest(error, 0);
}

#line 387
static inline void BlockStorageP__At45db__syncDone(error_t result)
#line 387
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__syncSyncDone(result);
    }
}

# 136 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__syncDone(error_t error){
#line 136
  BlockStorageP__At45db__syncDone(error);
#line 136
}
#line 136
# 392 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__flushDone(error_t result)
#line 392
{
}

# 154 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__flushDone(error_t error){
#line 154
  BlockStorageP__At45db__flushDone(error);
#line 154
}
#line 154
# 304 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseEraseDone(error_t error)
#line 304
{
  BlockStorageP__endRequest(error, 0);
}

#line 382
static inline void BlockStorageP__At45db__eraseDone(error_t result)
#line 382
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__eraseEraseDone(result);
    }
}

# 116 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__eraseDone(error_t error){
#line 116
  BlockStorageP__At45db__eraseDone(error);
#line 116
}
#line 116
# 393 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__copyPageDone(error_t error)
#line 393
{
}

# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__copyPageDone(error_t error){
#line 96
  BlockStorageP__At45db__copyPageDone(error);
#line 96
}
#line 96
# 221 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page)
#line 221
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH, cmd, 0, page, 0, (void *)0, 1);
}

# 73 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(cmd, page);
#line 73
}
#line 73
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskSuccess__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskSuccess);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 225 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page)
#line 225
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE, cmd, 0, page, 0, (void *)0, 1);
}

# 87 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(cmd, page);
#line 87
}
#line 87
# 239 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 240
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ, cmd, 2, 0, offset, pdata, count);
}

# 119 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, uint8_t * data, uint16_t n){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(cmd, offset, data, n);
#line 119
}
#line 119
# 244 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc)
#line 247
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC, cmd, 2, page, offset, (uint8_t * )baseCrc, count);
}

# 157 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(cmd, page, offset, n, baseCrc);
#line 157
}
#line 157
# 251 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 253
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE, cmd, 0, page, offset, pdata, count);
}

# 178 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, uint8_t * data, at45pageoffset_t n){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(cmd, page, offset, data, n);
#line 178
}
#line 178
# 217 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page)
#line 217
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL, cmd, 0, page, 0, (void *)0, 1);
}

# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(cmd, page);
#line 55
}
#line 55
# 205 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__writeDone(void )
#line 205
{
  At45dbP__buffer[At45dbP__selected].clean = FALSE;
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 185 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void ){
#line 185
  At45dbP__HplAt45db__writeDone();
#line 185
}
#line 185
# 201 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__readDone(void )
#line 201
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 141 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void ){
#line 141
  At45dbP__HplAt45db__readDone();
#line 141
}
#line 141
# 242 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__eraseDone(void )
#line 242
{
  At45dbP__flashBusy = TRUE;



  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = TRUE;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 106 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void ){
#line 106
  At45dbP__HplAt45db__eraseDone();
#line 106
}
#line 106
# 196 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void )
#line 196
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 41 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitCompare(void ){
#line 41
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare();
#line 41
}
#line 41
# 40 "/opt/tinyos-2.1.2/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
inline static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 223 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__compareDone(void )
#line 223
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__checking].busy = TRUE;




  At45dbP__BusyWait__wait(10);
  At45dbP__HplAt45db__waitCompare();
}

# 93 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void ){
#line 93
  At45dbP__HplAt45db__compareDone();
#line 93
}
#line 93
# 215 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__flushDone(void )
#line 215
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].unchecked++;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 79 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void ){
#line 79
  At45dbP__HplAt45db__flushDone();
#line 79
}
#line 79
# 234 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__fillDone(void )
#line 234
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void ){
#line 61
  At45dbP__HplAt45db__fillDone();
#line 61
}
#line 61
# 211 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__crcDone(uint16_t crc)
#line 211
{
  At45dbP__requestDone(SUCCESS, crc, At45dbP__IDLE);
}

# 163 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc){
#line 163
  At45dbP__HplAt45db__crcDone(computedCrc);
#line 163
}
#line 163
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc)
#line 55
{
  uint8_t s = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
  switch (s) 
    {
      default: break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(crc);
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone();
      break;
    }
}

# 50 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void )
#line 50
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void ){
#line 65
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure();
#line 65
}
#line 65
# 40 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void )
#line 40
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure();
  return SUCCESS;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 125 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void )
#line 125
{
  HplAt45dbIOP__Select__set();
}

# 52 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void ){
#line 52
  HplAt45dbIOP__HplAt45dbByte__deselect();
#line 52
}
#line 52
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
inline static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAt45dbIOP__FlashSpi__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 3);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr();
#line 41
}
#line 41
# 120 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__select(void )
#line 120
{
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Select__clr();
}

# 47 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void ){
#line 47
  HplAt45dbIOP__HplAt45dbByte__select();
#line 47
}
#line 47
# 92 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void )
#line 92
{
  uint8_t in = 0;
#line 93
  uint8_t out = 0;
  uint8_t *ptr;
  at45pageoffset_t count;
  uint8_t lphase;
  uint16_t crc = (uint16_t )/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;

  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount) 
    {






      ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd;
      lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD;
      count = 4 + /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
      for (; ; ) 
        {
          if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC) 
            {
              crc = crcByte(crc, in);

              --count;
              if (!count) {
                break;
                }
            }
          else {
#line 122
            if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD) 
              {

                out = * ptr++;
                count--;
                if (!count) 
                  {
                    lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;
                    ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
                    count = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
                  }
              }
            else {
#line 134
              if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ) 
                {
                  * ptr++ = in;
                  --count;
                  if (!count) {
                    break;
                    }
                }
              else {
#line 141
                if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE) 
                  {
                    if (!count) {
                      break;
                      }
                    out = * ptr++;
                    --count;
                  }
                else {
                  break;
                  }
                }
              }
            }
#line 152
          in = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(out);
        }
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
    }

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(crc);
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HplAt45dbIOP__avail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplAt45dbIOP__avail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
inline static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 5;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set();
#line 40
}
#line 40
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )41U & (1 << 2)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool HplAt45dbIOP__In__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 167 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void )
#line 167
{


  int i;

#line 171
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__BusyWait__wait(2);
  while (!HplAt45dbIOP__In__get()) {
      for (i = 0; i < 8; i++) {
          HplAt45dbIOP__Clk__set();
          HplAt45dbIOP__Clk__clr();
          HplAt45dbIOP__BusyWait__wait(2);
        }
    }
  HplAt45dbIOP__avail__postTask();
}

# 31 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void ){
#line 31
  HplAt45dbIOP__HplAt45dbByte__waitIdle();
#line 31
}
#line 31
# 86 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void )
#line 86
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(AT45_C_REQ_STATUS);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle();
}

#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void )
#line 161
{
  switch (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status) 
    {
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE: case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE: 
          /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus();
      break;
      default: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand();
      break;
    }
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void ){
#line 102
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted();
#line 102
}
#line 102
# 49 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void )
#line 49
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void ){
#line 59
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure();
#line 59
}
#line 59
# 25 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void )
#line 25
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure();
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted();
}

# 174 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitIdleDone(void )
#line 174
{
  At45dbP__flashIdle();







  At45dbP__handleRWRequest();
}

# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void ){
#line 35
  At45dbP__HplAt45db__waitIdleDone();
#line 35
}
#line 35
# 186 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok)
#line 186
{
  At45dbP__flashIdle();

  if (ok) {
    At45dbP__buffer[At45dbP__checking].unchecked = 0;
    }
  else {
#line 191
    if (At45dbP__buffer[At45dbP__checking].unchecked < 2) {
      At45dbP__buffer[At45dbP__checking].clean = FALSE;
      }
    else {
        At45dbP__requestDone(FAIL, 0, At45dbP__BROKEN);
        return;
      }
    }
#line 198
  At45dbP__handleRWRequest();
}

# 47 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk){
#line 47
  At45dbP__HplAt45db__waitCompareDone(compareOk);
#line 47
}
#line 47
# 183 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void )
#line 183
{
  HplAt45dbIOP__Clk__set();
  HplAt45dbIOP__Clk__clr();

   __asm volatile ("nop");
   __asm volatile ("nop");
  return !HplAt45dbIOP__In__get();
}

# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAt45dbIOP__HplAt45dbByte__getCompareStatus();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 201 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void )
#line 201
{
  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE) 
    {
      bool cstatus = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus();

#line 205
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(cstatus);
    }
  else 
    {
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone();
    }
}

# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void HplAt45dbIOP__HplAt45dbByte__idle(void ){
#line 35
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle();
#line 35
}
#line 35
# 163 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__avail__runTask(void )
#line 163
{
  HplAt45dbIOP__HplAt45dbByte__idle();
}

# 148 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__taskFail__runTask(void )
#line 148
{
  At45dbP__requestDone(FAIL, 0, At45dbP__IDLE);
}

#line 145
static inline void At45dbP__taskSuccess__runTask(void )
#line 145
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

#line 124
static inline error_t At45dbP__Init__init(void )
#line 124
{
  At45dbP__request = At45dbP__IDLE;
  At45dbP__flashBusy = TRUE;


  At45dbP__buffer[0].page = At45dbP__buffer[1].page = AT45_MAX_PAGES;
  At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
  At45dbP__buffer[0].clean = At45dbP__buffer[1].clean = TRUE;
  At45dbP__buffer[0].unchecked = At45dbP__buffer[1].unchecked = 0;
  At45dbP__buffer[0].erased = At45dbP__buffer[1].erased = FALSE;

  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 216 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 154 "/opt/tinyos-2.1.2/tos/platforms/iris/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 154
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 224 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 224
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0XC9 = ctrl.flat;

  return SUCCESS;
}

#line 130
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 130
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0XC1 = ctrl.flat;

  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__Uart0Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, At45dbP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei");}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static error_t RandRWC__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 112 "RandRWC.nc"
static inline void RandRWC__Boot__booted(void )
#line 112
{
  RandRWC__SerialControl__start();
}

# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  RandRWC__Boot__booted();
#line 60
}
#line 60
# 164 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void )
#line 164
{
  return ATM128_POWER_DOWN;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC__McuPowerOverride__default__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 107
{










  if ((
#line 117
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 131
        if (* (volatile uint8_t *)0XC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 147 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 147
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 152
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 152
    uint8_t __result;

#line 152
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 153
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 397 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-2.1.2/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-2.1.2/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-2.1.2/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-2.1.2/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-2.1.2/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 320 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 320
{
}

# 49 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 319 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 319
{
}

# 47 "/opt/tinyos-2.1.2/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 225 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareA__default__fired(void )
#line 225
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareA__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 229 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareB__default__fired(void )
#line 229
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareC__default__fired(void )
#line 233
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 237 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time)
#line 237
{
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t){
#line 60
  HplAtm1281Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 219 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x96;
}

# 216 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
}
#line 70
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f5491689ab0){
#line 75
  switch (arg_0x7f5491689ab0) {
#line 75
    case At45dbP__taskSuccess:
#line 75
      At45dbP__taskSuccess__runTask();
#line 75
      break;
#line 75
    case At45dbP__taskFail:
#line 75
      At45dbP__taskFail__runTask();
#line 75
      break;
#line 75
    case HplAt45dbIOP__avail:
#line 75
      HplAt45dbIOP__avail__runTask();
#line 75
      break;
#line 75
    case /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted:
#line 75
      /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask();
#line 75
      break;
#line 75
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7f5491689ab0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 170 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "RandRWC.nc"
static void RandRWC__resetSeed(void )
#line 53
{
  RandRWC__shiftReg = 119 * 119 * (TOS_NODE_ID % 100 + 1);
  RandRWC__initSeed = RandRWC__shiftReg;
  RandRWC__mask = 137 * 29 * (TOS_NODE_ID % 100 + 1);
}

#line 37
static uint16_t RandRWC__rand(void )
#line 37
{
  bool endbit;
  uint16_t tmpShiftReg;

  tmpShiftReg = RandRWC__shiftReg;
  endbit = (tmpShiftReg & 0x8000) != 0;
  tmpShiftReg <<= 1;
  if (endbit) {
    tmpShiftReg ^= 0x100b;
    }
#line 46
  tmpShiftReg++;
  RandRWC__shiftReg = tmpShiftReg;
  tmpShiftReg = tmpShiftReg ^ RandRWC__mask;

  return tmpShiftReg;
}

#line 206
static void RandRWC__done(void )
#line 206
{
  uint8_t act = TOS_NODE_ID / 100;

  RandRWC__Leds__led2Toggle();

  switch (act) 
    {
      case 0: 
        if (RandRWC__testCount < sizeof RandRWC__actions) {
          RandRWC__doAction(RandRWC__actions[RandRWC__testCount]);
          }
        else {
#line 217
          RandRWC__success();
          }
#line 218
      break;

      case RandRWC__A_READ: case RandRWC__A_WRITE: 
          if (RandRWC__testCount) {
            RandRWC__success();
            }
          else {
#line 224
            RandRWC__doAction(act);
            }
#line 225
      break;

      default: 
        RandRWC__fail(FAIL);
      break;
    }
  RandRWC__testCount++;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 0;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 186 "RandRWC.nc"
static void RandRWC__doAction(int act)
#line 186
{
  RandRWC__count = 0;
  RandRWC__resetSeed();

  switch (act) 
    {
      case RandRWC__A_WRITE: 
        RandRWC__scheck(RandRWC__BlockWrite__erase());
      break;
      case RandRWC__A_READ: 
        RandRWC__nextRead();
      break;
    }
}

#line 90
static __attribute((noinline)) bool RandRWC__scheck(error_t r)
#line 90
{
  if (r != SUCCESS) {
    RandRWC__fail(r);
    }
#line 93
  return r == SUCCESS;
}

#line 67
static void RandRWC__report(error_t e)
#line 67
{
  uint8_t *msg = RandRWC__AMSend__getPayload(&RandRWC__reportMsg, 1);

  msg[0] = e;
  if (RandRWC__AMSend__send(AM_BROADCAST_ADDR, &RandRWC__reportMsg, 1) != SUCCESS) {
    RandRWC__Leds__led0On();
    }
}

# 518 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 189 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len)
#line 190
{
  storage_len_t vsize;

  if (BlockStorageP__s[id].request != BlockStorageP__R_IDLE) {
    return EBUSY;
    }
  vsize = BlockStorageP__BlockRead__getSize(id);
  if (addr > vsize || len > vsize - addr) {
    return EINVAL;
    }
  BlockStorageP__s[id].request = newState;
  BlockStorageP__s[id].addr = addr;




  BlockStorageP__s[id].buf = (void *)0;
  BlockStorageP__s[id].len = len;
  BlockStorageP__s[id].buf = buf;

  BlockStorageP__Resource__request(id);

  return SUCCESS;
}

# 134 "RandRWC.nc"
static void RandRWC__nextRead(void )
#line 134
{
  if (++RandRWC__count == RandRWC__NWRITES) {
    RandRWC__done();
    }
  else {
      RandRWC__setParameters();
      RandRWC__scheck(RandRWC__BlockRead__read(RandRWC__addr, RandRWC__rdata, RandRWC__len));
    }
}

#line 102
static void RandRWC__setParameters(void )
#line 102
{
  RandRWC__addr = ((uint32_t )RandRWC__count << 12) | (RandRWC__rand() >> 6);
  RandRWC__len = RandRWC__rand() >> 7;
  if (RandRWC__addr + RandRWC__len > RandRWC__SIZE) {
    RandRWC__addr = RandRWC__SIZE - RandRWC__len;
    }
#line 107
  RandRWC__offset = RandRWC__rand() >> 8;
  if (RandRWC__offset + RandRWC__len > sizeof RandRWC__data) {
    RandRWC__offset = sizeof RandRWC__data - RandRWC__len;
    }
}

# 357 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.1.2/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 207 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      * (volatile uint8_t *)0XC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
}

# 377 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n)
#line 378
{
  At45dbP__request = req;

  At45dbP__reqBuf = (void *)0;
  At45dbP__reqBytes = n;
  At45dbP__reqBuf = reqdata;
  At45dbP__reqPage = page;
  At45dbP__reqOffset = offset;

  if (page == At45dbP__buffer[0].page) {
    At45dbP__selected = 0;
    }
  else {
#line 389
    if (page == At45dbP__buffer[1].page) {
      At45dbP__selected = 1;
      }
    else {
#line 392
      At45dbP__selected = !At45dbP__selected;
      }
    }



  if ((((
#line 395
  page >= AT45_MAX_PAGES || 
  n > AT45_PAGE_SIZE) || (
  req != At45dbP__R_COPY && offset >= AT45_PAGE_SIZE)) || (
  req != At45dbP__R_COPY && offset + n > AT45_PAGE_SIZE)) || (
  req == At45dbP__R_COPY && offset >= AT45_MAX_PAGES)) {
      At45dbP__taskFail__postTask();
    }
  else {

    At45dbP__handleRWRequest();
    }
}

#line 255
static void At45dbP__handleRWRequest(void )
#line 255
{
  if (At45dbP__reqPage == At45dbP__buffer[At45dbP__selected].page) {
    switch (At45dbP__request) 
      {
        case At45dbP__R_ERASE: 
          switch (At45dbP__reqOffset) 
            {
              case AT45_ERASE: 
                if (At45dbP__flashBusy) {
                  At45dbP__HplAt45db__waitIdle();
                  }
                else {
#line 266
                  At45dbP__HplAt45db__erase(AT45_C_ERASE_PAGE, At45dbP__reqPage);
                  }
#line 267
              break;
              case AT45_PREVIOUSLY_ERASED: 

                At45dbP__buffer[At45dbP__selected].erased = TRUE;

              case AT45_DONT_ERASE: 



                At45dbP__buffer[At45dbP__selected].clean = TRUE;
              At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
              break;
            }
        break;

        case At45dbP__R_COPY: 
          if (! At45dbP__buffer[At45dbP__selected].clean) {
            At45dbP__flushBuffer();
            }
          else {


              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqOffset;
              At45dbP__buffer[At45dbP__selected].clean = FALSE;
              At45dbP__taskSuccess__postTask();
            }
        break;

        case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: 
            if (At45dbP__buffer[At45dbP__selected].clean && At45dbP__buffer[At45dbP__selected].unchecked) 
              {
                At45dbP__checkBuffer(At45dbP__selected);
                return;
              }

        case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: 
            if (! At45dbP__buffer[At45dbP__selected].clean) {
              At45dbP__flushBuffer();
              }
            else {
#line 305
              if (At45dbP__request == At45dbP__R_FLUSH || At45dbP__request == At45dbP__R_SYNC) {
                At45dbP__taskSuccess__postTask();
                }
              else {

                  uint8_t oreq = At45dbP__request;

                  At45dbP__request = At45dbP__IDLE;
                  At45dbP__syncOrFlushAll(oreq);
                }
              }
#line 315
        break;

        case At45dbP__R_READ: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 321
            At45dbP__HplAt45db__readBuffer(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 323
        break;

        case At45dbP__R_READCRC: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
            At45dbP__HplAt45db__crc(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, 0, At45dbP__reqOffset, At45dbP__reqBytes, 
            (uint16_t )At45dbP__reqBuf);
            }
#line 332
        break;

        case At45dbP__R_WRITE: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 338
            At45dbP__HplAt45db__write(At45dbP__selected ? AT45_C_WRITE_BUFFER1 : AT45_C_WRITE_BUFFER2, 0, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 340
        break;
      }
    }
  else {
#line 342
    if (! At45dbP__buffer[At45dbP__selected].clean) {
      At45dbP__flushBuffer();
      }
    else {
#line 344
      if (At45dbP__buffer[At45dbP__selected].unchecked) {
        At45dbP__checkBuffer(At45dbP__selected);
        }
      else {

          if (At45dbP__request == At45dbP__R_ERASE) 
            {
              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
              At45dbP__handleRWRequest();
            }
          else {
#line 354
            if (At45dbP__flashBusy) {
              At45dbP__HplAt45db__waitIdle();
              }
            else {
#line 357
              At45dbP__HplAt45db__fill(At45dbP__selected ? AT45_C_FILL_BUFFER1 : AT45_C_FILL_BUFFER2, At45dbP__reqPage);
              }
            }
        }
      }
    }
}

# 173 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount)
#line 175
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = op;


  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[0] = reqCmd;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[1] = reqPage >> (16 - 9);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[2] = (reqPage << (9 - 8)) | (reqOffset >> 8);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[3] = reqOffset;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = (void *)0;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount = reqCount;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = reqData;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare = reqDontCare;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 361 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
#line 361
{
  uint8_t orequest = At45dbP__request;

  At45dbP__request = newState;
  switch (orequest) 
    {
      case At45dbP__R_READ: At45dbP__At45db__readDone(result);
#line 367
      break;
      case At45dbP__R_READCRC: At45dbP__At45db__computeCrcDone(result, computedCrc);
#line 368
      break;
      case At45dbP__R_WRITE: At45dbP__At45db__writeDone(result);
#line 369
      break;
      case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: At45dbP__At45db__syncDone(result);
#line 370
      break;
      case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: At45dbP__At45db__flushDone(result);
#line 371
      break;
      case At45dbP__R_ERASE: At45dbP__At45db__eraseDone(result);
#line 372
      break;
      case At45dbP__R_COPY: At45dbP__At45db__copyPageDone(result);
#line 373
      break;
    }
}

# 161 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__endRequest(error_t result, uint16_t crc)
#line 161
{
  uint8_t c = BlockStorageP__client;
  uint8_t tmpState = BlockStorageP__s[c].request;

  BlockStorageP__client = BlockStorageP__NO_CLIENT;
  BlockStorageP__s[c].request = BlockStorageP__R_IDLE;
  BlockStorageP__Resource__release(c);

  switch (tmpState) 
    {
      case BlockStorageP__R_READ: 
        BlockStorageP__BlockRead__readDone(c, BlockStorageP__s[c].addr, BlockStorageP__s[c].buf, BlockStorageP__currentOffset, result);
      break;
      case BlockStorageP__R_WRITE: 
        BlockStorageP__BlockWrite__writeDone(c, BlockStorageP__s[c].addr, BlockStorageP__s[c].buf, BlockStorageP__currentOffset, result);
      break;
      case BlockStorageP__R_ERASE: 
        BlockStorageP__BlockWrite__eraseDone(c, result);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__BlockRead__computeCrcDone(c, BlockStorageP__s[c].addr, BlockStorageP__currentOffset, crc, result);
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__BlockWrite__syncDone(c, result);
      break;
    }
}

# 175 "RandRWC.nc"
static __attribute((noinline)) void RandRWC__BlockRead__readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result)
#line 175
{
  if (RandRWC__scheck(result) && RandRWC__bcheck(x == RandRWC__addr && rlen == RandRWC__len && buf == RandRWC__rdata && 
  memcmp(RandRWC__data + RandRWC__offset, RandRWC__rdata, rlen) == 0)) {
    RandRWC__nextRead();
    }
}

#line 144
static void RandRWC__nextWrite(void )
#line 144
{
  if (++RandRWC__count == RandRWC__NWRITES) 
    {
      RandRWC__Leds__led2Toggle();
      RandRWC__scheck(RandRWC__BlockWrite__sync());
    }
  else 
    {
      RandRWC__setParameters();
      RandRWC__scheck(RandRWC__BlockWrite__write(RandRWC__addr, RandRWC__data + RandRWC__offset, RandRWC__len));
    }
}

# 246 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__multipageContinue(uint16_t crc)
#line 246
{
  storage_addr_t remaining = BlockStorageP__s[BlockStorageP__client].len - BlockStorageP__currentOffset;
#line 247
  storage_addr_t addr;
  at45page_t page;
  at45pageoffset_t pageOffset;
#line 249
  at45pageoffset_t count;
  uint8_t *buf = BlockStorageP__s[BlockStorageP__client].buf;

  if (remaining == 0) 
    {
      BlockStorageP__endRequest(SUCCESS, crc);
      return;
    }

  addr = BlockStorageP__s[BlockStorageP__client].addr + BlockStorageP__currentOffset;
  page = BlockStorageP__pageRemap(addr >> AT45_PAGE_SIZE_LOG2);
  pageOffset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);
  count = (1 << AT45_PAGE_SIZE_LOG2) - pageOffset;
  if (remaining < count) {
    count = remaining;
    }
  switch (BlockStorageP__s[BlockStorageP__client].request) 
    {
      case BlockStorageP__R_WRITE: 
        BlockStorageP__At45db__write(page, pageOffset, buf + BlockStorageP__currentOffset, count);
      break;
      case BlockStorageP__R_READ: 
        BlockStorageP__At45db__read(page, pageOffset, buf + BlockStorageP__currentOffset, count);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__At45db__computeCrc(page, pageOffset, count, crc);
      break;
    }
  BlockStorageP__currentOffset += count;
}

#line 125
static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page)
#line 125
{
  if (BlockStorageP__BConfig__isConfig(id) && BlockStorageP__BConfig__flipped(id)) {
    page += BlockStorageP__BConfig__npages(id);
    }
#line 128
  return BlockStorageP__At45dbVolume__remap(id, page);
}

# 162 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flushBuffer(void )
#line 162
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__flush(At45dbP__buffer[At45dbP__selected].erased ? 
  At45dbP__selected ? AT45_C_QFLUSH_BUFFER1 : AT45_C_QFLUSH_BUFFER2 : 
  At45dbP__selected ? AT45_C_FLUSH_BUFFER1 : AT45_C_FLUSH_BUFFER2, 
  At45dbP__buffer[At45dbP__selected].page);
}

#line 152
static void At45dbP__checkBuffer(uint8_t buf)
#line 152
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__compare(buf ? AT45_C_COMPARE_BUFFER1 : AT45_C_COMPARE_BUFFER2, At45dbP__buffer[buf].page);
  At45dbP__checking = buf;
}

#line 460
static void At45dbP__syncOrFlushAll(uint8_t newReq)
#line 460
{
  At45dbP__request = newReq;

  if (! At45dbP__buffer[0].clean) {
    At45dbP__selected = 0;
    }
  else {
#line 465
    if (! At45dbP__buffer[1].clean) {
      At45dbP__selected = 1;
      }
    else {
        At45dbP__taskSuccess__postTask();
        return;
      }
    }
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__handleRWRequest();
}

# 142 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut)
#line 142
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x0B + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 150
       __asm volatile ("sbrc %2,""7""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 151
       __asm volatile ("sbrc %2,""6""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 152
       __asm volatile ("sbrc %2,""5""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 153
       __asm volatile ("sbrc %2,""4""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 154
       __asm volatile ("sbrc %2,""3""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 155
       __asm volatile ("sbrc %2,""2""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 156
       __asm volatile ("sbrc %2,""1""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 157
       __asm volatile ("sbrc %2,""0""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 157
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 138 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flashIdle(void )
#line 138
{
  At45dbP__flashBusy = At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
}

# 214 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 214
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0XC6);
    }
}

# 412 "/opt/tinyos-2.1.2/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 296 "/opt/tinyos-2.1.2/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 220 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 220
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/opt/tinyos-2.1.2/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 308 "/opt/tinyos-2.1.2/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 308
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 313
__attribute((interrupt))   void __vector_38(void )
#line 313
{
  HplAtm128UartP__HplUart1__txDone();
}

# 226 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 226
{
  HplAtm1281Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 230
{
  HplAtm1281Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_34(void )
#line 234
{
  HplAtm1281Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 238
{
  HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_35(void )
#line 242
{
  HplAtm1281Timer3P__Timer__overflow();
}

