static void process_gui(void);
static bool process_touch_buttons(const enum menu menu);
inline static void draw_menu_button(const struct menu_buttons *mb, const uint_fast8_t index);
static void draw_menu_buttons(const enum menu menu);
inline static bool point2aabb(uint_fast16_t px, uint_fast16_t py, uint_fast16_t bx, uint_fast16_t by, uint_fast16_t bw, uint_fast16_t bh);
inline static void say(const char *message);
static void process_menu_main(void);
static void process_menu_settings(void);
static void process_menu_messages(void);
static void process_menu_coordinates(void);
static touch_button_function tb_null;
static touch_button_function tb_set_menu;
static touch_button_function tb_set_menu_last;
static touch_button_function tb_key;
static touch_button_function tb_key_shift;
static touch_button_function tb_key_caps;
static touch_button_function tb_key_enter;
static touch_button_function tb_key_backspace;
static void draw_time(void);
static void draw_keyboard_legends(void);