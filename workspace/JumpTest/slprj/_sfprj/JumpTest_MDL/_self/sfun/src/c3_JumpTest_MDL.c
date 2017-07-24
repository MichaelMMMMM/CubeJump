/* Include files */

#include "JumpTest_MDL_sfun.h"
#include "c3_JumpTest_MDL.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "JumpTest_MDL_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_Balance                  ((uint8_T)1U)
#define c3_IN_Idle                     ((uint8_T)2U)
#define c3_IN_Jumping                  ((uint8_T)3U)
#define c3_IN_Accelerating             ((uint8_T)1U)
#define c3_IN_Braking                  ((uint8_T)2U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_j_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_l_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void initialize_params_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void enable_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void disable_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void c3_update_debugger_state_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance);
static void ext_mode_exec_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance);
static void set_sim_state_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance);
static void finalize_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void sf_gateway_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void mdl_start_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void c3_chartstep_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void initSimStructsc3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static boolean_T c3_b_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_sf_internal_predicateOutput, const char_T
  *c3_identifier);
static boolean_T c3_c_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_d_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_sfEvent, const char_T *c3_identifier);
static int32_T c3_e_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_f_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_is_Jumping, const char_T *c3_identifier);
static uint8_T c3_g_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint32_T c3_h_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_motor_input, const char_T *c3_identifier);
static uint32_T c3_i_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_j_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier);
static const mxArray *c3_k_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc3_JumpTest_MDLInstanceStruct *
  chartInstance, int32_T c3_ssid);
static void c3_init_sf_message_store_memory(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc3_JumpTest_MDLInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc3_JumpTest_MDL(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c3_is_Jumping = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_active_c3_JumpTest_MDL = 0U;
  *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_brake_counter = 0;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_counter, 0U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c3_motor_enable = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 1U, 0U,
                          *chartInstance->c3_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c3_motor_input = 0U;
    _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U, 1U,
      0U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 0, 0);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c3_brake_enable = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 1U, 0U,
                          *chartInstance->c3_sfEvent, false);
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  *chartInstance->c3_is_active_c3_JumpTest_MDL = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_Idle;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_c_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_motor_enable = false;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U, 1U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_motor_input = 0U;
  _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U, 4U,
    1U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 33, 23);
  *chartInstance->c3_brake_enable = false;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 4U, 1U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_JumpTest_MDLMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c3_is_active_c3_JumpTest_MDL == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_JumpTest_MDL == c3_IN_Balance) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_JumpTest_MDL == c3_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_JumpTest_MDL == c3_IN_Jumping) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_Jumping == c3_IN_Braking) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_Jumping == c3_IN_Accelerating) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  c3_update_debugger_state_c3_JumpTest_MDL(chartInstance);
}

static const mxArray *get_sim_state_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  boolean_T c3_hoistedGlobal;
  const mxArray *c3_b_y = NULL;
  boolean_T c3_b_hoistedGlobal;
  const mxArray *c3_c_y = NULL;
  uint32_T c3_c_hoistedGlobal;
  const mxArray *c3_d_y = NULL;
  int32_T c3_d_hoistedGlobal;
  const mxArray *c3_e_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  const mxArray *c3_h_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(7, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_brake_enable;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_hoistedGlobal, 11, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *chartInstance->c3_motor_enable;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_hoistedGlobal, 11, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *chartInstance->c3_motor_input;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_hoistedGlobal, 7, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *chartInstance->c3_brake_counter;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_hoistedGlobal, 6, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = *chartInstance->c3_is_active_c3_JumpTest_MDL;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = *chartInstance->c3_is_c3_JumpTest_MDL;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = *chartInstance->c3_is_Jumping;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 6, c3_h_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  *chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_brake_enable = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("brake_enable", c3_u, 0)), "brake_enable");
  *chartInstance->c3_motor_enable = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("motor_enable", c3_u, 1)), "motor_enable");
  *chartInstance->c3_motor_input = c3_h_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("motor_input", c3_u, 2)), "motor_input");
  *chartInstance->c3_brake_counter = c3_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("brake_counter", c3_u, 3)), "brake_counter");
  *chartInstance->c3_is_active_c3_JumpTest_MDL = c3_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c3_JumpTest_MDL", c3_u,
       4)), "is_active_c3_JumpTest_MDL");
  *chartInstance->c3_is_c3_JumpTest_MDL = c3_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c3_JumpTest_MDL", c3_u, 5)),
    "is_c3_JumpTest_MDL");
  *chartInstance->c3_is_Jumping = c3_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_Jumping", c3_u, 6)), "is_Jumping");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c3_u, 7)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_JumpTest_MDL(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_JumpTest_MDL
  (SFc3_JumpTest_MDLInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  c3_set_sim_state_side_effects_c3_JumpTest_MDL(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_jump_velocity, 5U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_phi_max, 4U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_jump_event, 3U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_uR, 2U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_phi, 1U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_JumpTest_MDL(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_JumpTest_MDLMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  c3_init_sf_message_store_memory(chartInstance);
}

static void c3_chartstep_c3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_b_nargin = 0.0;
  real_T c3_nargout = 1.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_out;
  boolean_T c3_b_out;
  real_T c3_c_nargin = 0.0;
  real_T c3_d_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_c_out;
  boolean_T c3_d_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_e_nargin = 0.0;
  real_T c3_f_nargin = 0.0;
  real_T c3_e_nargout = 1.0;
  real_T c3_f_nargout = 0.0;
  boolean_T c3_e_out;
  real_T c3_g_nargin = 0.0;
  real_T c3_h_nargin = 0.0;
  real_T c3_g_nargout = 0.0;
  real_T c3_i_nargin = 0.0;
  real_T c3_h_nargout = 0.0;
  int32_T c3_q0;
  real_T c3_i_nargout = 0.0;
  real_T c3_j_nargin = 0.0;
  int32_T c3_q1;
  real_T c3_j_nargout = 0.0;
  int32_T c3_qY;
  real_T c3_k_nargin = 0.0;
  real_T c3_k_nargout = 0.0;
  real_T c3_l_nargin = 0.0;
  real_T c3_l_nargout = 0.0;
  real_T c3_m_nargin = 0.0;
  real_T c3_n_nargin = 0.0;
  real_T c3_m_nargout = 0.0;
  real_T c3_n_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  guard1 = false;
  switch (*chartInstance->c3_is_c3_JumpTest_MDL) {
   case c3_IN_Balance:
    CV_CHART_EVAL(0, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_j_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_out = CV_EML_IF(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0,
      *chartInstance->c3_phi, *chartInstance->c3_phi_max, -1, 4U,
      *chartInstance->c3_phi > *chartInstance->c3_phi_max));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_b_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_motor_enable = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U, 0U,
                            *chartInstance->c3_sfEvent, false);
      *chartInstance->c3_motor_input = 0U;
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
        4U, 0U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 91, 23);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_c_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_l_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_l_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_motor_enable = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U, 1U,
                            *chartInstance->c3_sfEvent, false);
      *chartInstance->c3_motor_input = 0U;
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
        4U, 1U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 33, 23);
      *chartInstance->c3_brake_enable = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 4U, 1U,
                            *chartInstance->c3_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   *chartInstance->c3_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_Idle:
    CV_CHART_EVAL(0, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_l_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(1, 0, 0, *chartInstance->c3_jump_event);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_Jumping;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_Jumping = c3_IN_Accelerating;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_g_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_j_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_j_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_motor_enable = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U, 3U,
                            *chartInstance->c3_sfEvent, false);
      *chartInstance->c3_motor_input = 1U;
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
        4U, 3U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 42, 23);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_k_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_e_out = CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0,
        *chartInstance->c3_phi, *chartInstance->c3_phi_max, -1, 2U,
        *chartInstance->c3_phi < *chartInstance->c3_phi_max));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_Balance;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_k_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_k_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_motor_enable = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U,
                              0U, *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_motor_input = 2U;
        _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
          4U, 0U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 37, 23);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c3_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_Jumping:
    CV_CHART_EVAL(0, 0, 3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
    switch (*chartInstance->c3_is_Jumping) {
     case c3_IN_Accelerating:
      CV_STATE_EVAL(2, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_i_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
        *chartInstance->c3_uR, *chartInstance->c3_jump_velocity, -1, 4U,
        *chartInstance->c3_uR > *chartInstance->c3_jump_velocity));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 3U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_h_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_motor_enable = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U,
                              3U, *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_motor_input = 0U;
        _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
          4U, 3U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 96, 23);
        _SFD_SYMBOL_SCOPE_POP();
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_Jumping = c3_IN_Braking;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_d_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_m_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_m_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_brake_enable = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 4U,
                              4U, *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_brake_counter = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_counter, 0U, 4U,
                              4U, *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c3_sfEvent);
      guard1 = true;
      break;

     case c3_IN_Braking:
      CV_STATE_EVAL(2, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_m_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_d_out = CV_EML_IF(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0, 5.0, (real_T)
        *chartInstance->c3_brake_counter, -1, 2U, 5.0 < (real_T)
        *chartInstance->c3_brake_counter));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 4U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_f_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_brake_enable = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 4U,
                              4U, *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_Jumping = c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_c_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_n_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_n_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_motor_enable = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_motor_enable, 6U, 4U,
                              1U, *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_motor_input = 0U;
        _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c3_motor_input, 7U,
          4U, 1U, *chartInstance->c3_sfEvent, false, 0.0, 2.0, 0U, 33, 23);
        *chartInstance->c3_brake_enable = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_enable, 8U, 4U,
                              1U, *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_e_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        c3_q0 = *chartInstance->c3_brake_counter;
        c3_q1 = 1;
        if ((c3_q1 < 0) && (c3_q0 < MIN_int32_T - c3_q1)) {
          CV_SATURATION_EVAL(4, 4, 0, 0, 1);
          c3_qY = MIN_int32_T;
        } else if (CV_SATURATION_EVAL(4, 4, 0, 0, (c3_q1 > 0) && (c3_q0 >
                     MAX_int32_T - c3_q1))) {
          c3_qY = MAX_int32_T;
        } else {
          c3_qY = c3_q0 + c3_q1;
        }

        *chartInstance->c3_brake_counter = c3_qY;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_brake_counter, 0U, 4U,
                              4U, *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
      if (*chartInstance->c3_is_c3_JumpTest_MDL != c3_IN_Jumping) {
      } else {
        guard1 = true;
      }
      break;

     default:
      CV_STATE_EVAL(2, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c3_is_Jumping = c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
      guard1 = true;
      break;
    }
    break;

   default:
    CV_CHART_EVAL(0, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c3_is_c3_JumpTest_MDL = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
    break;
  }

  if (guard1) {
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
}

static void initSimStructsc3_JumpTest_MDL(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)c3_machineNumber;
  (void)c3_chartNumber;
  (void)c3_instanceNumber;
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_b_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_sf_internal_predicateOutput, const char_T
  *c3_identifier)
{
  boolean_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  return c3_y;
}

static boolean_T c3_c_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b0, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_sf_internal_predicateOutput;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_sf_internal_predicateOutput = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_JumpTest_MDL_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_d_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_sfEvent, const char_T *c3_identifier)
{
  int32_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  return c3_y;
}

static int32_T c3_e_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i0, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_f_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_is_Jumping, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_Jumping),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_Jumping);
  return c3_y;
}

static uint8_T c3_g_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_is_Jumping;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_b_is_Jumping = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_Jumping),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_Jumping);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint32_T c3_h_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_motor_input, const char_T *c3_identifier)
{
  uint32_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_motor_input),
    &c3_thisId);
  sf_mex_destroy(&c3_b_motor_input);
  return c3_y;
}

static uint32_T c3_i_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint32_T c3_y;
  uint32_T c3_u1;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u1, 1, 7, 0U, 0, 0U, 0);
  c3_y = c3_u1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_motor_input;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint32_T c3_y;
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)chartInstanceVoid;
  c3_b_motor_input = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_motor_input),
    &c3_thisId);
  sf_mex_destroy(&c3_b_motor_input);
  *(uint32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_j_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_k_emlrt_marshallIn(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc3_JumpTest_MDLInstanceStruct *
  chartInstance, int32_T c3_ssid)
{
  const mxArray *c3_msgInfo;
  (void)chartInstance;
  (void)c3_ssid;
  c3_msgInfo = NULL;
  return NULL;
}

static void c3_init_sf_message_store_memory(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc3_JumpTest_MDLInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_JumpTest_MDLInstanceStruct
  *chartInstance)
{
  chartInstance->c3_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c3_doneDoubleBufferReInit = (boolean_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_is_active_c3_JumpTest_MDL = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_is_c3_JumpTest_MDL = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_is_Jumping = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    4);
  chartInstance->c3_phi = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_uR = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c3_motor_enable = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_motor_input = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_brake_enable = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_jump_event = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_phi_max = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_jump_velocity = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c3_brake_counter = (int32_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c3_JumpTest_MDL_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(702579153U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2562282320U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2390243017U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(334956188U);
}

mxArray* sf_c3_JumpTest_MDL_get_post_codegen_info(void);
mxArray *sf_c3_JumpTest_MDL_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("uWzKFnCrKssy0eqQnGOQZE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo = sf_c3_JumpTest_MDL_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_JumpTest_MDL_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_JumpTest_MDL_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_JumpTest_MDL_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_JumpTest_MDL_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c3_JumpTest_MDL(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[25],T\"brake_enable\",},{M[1],M[23],T\"motor_enable\",},{M[1],M[24],T\"motor_input\",},{M[3],M[31],T\"brake_counter\",},{M[8],M[0],T\"is_active_c3_JumpTest_MDL\",},{M[9],M[0],T\"is_c3_JumpTest_MDL\",},{M[9],M[3],T\"is_Jumping\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_JumpTest_MDL_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc3_JumpTest_MDLInstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_JumpTest_MDLInstanceStruct *chartInstance =
      (SFc3_JumpTest_MDLInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _JumpTest_MDLMachineNumber_,
           3,
           5,
           7,
           0,
           9,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_JumpTest_MDLMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_JumpTest_MDLMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _JumpTest_MDLMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"brake_counter");
          _SFD_SET_DATA_PROPS(1,1,1,0,"phi");
          _SFD_SET_DATA_PROPS(2,1,1,0,"uR");
          _SFD_SET_DATA_PROPS(3,1,1,0,"jump_event");
          _SFD_SET_DATA_PROPS(4,1,1,0,"phi_max");
          _SFD_SET_DATA_PROPS(5,1,1,0,"jump_velocity");
          _SFD_SET_DATA_PROPS(6,2,0,1,"motor_enable");
          _SFD_SET_DATA_PROPS(7,2,0,1,"motor_input");
          _SFD_SET_DATA_PROPS(8,2,0,1,"brake_enable");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,2);
          _SFD_ST_SUBSTATE_INDEX(2,0,3);
          _SFD_ST_SUBSTATE_INDEX(2,1,4);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(4,1,0,87,-1,111);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,19,1,19);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,19,-1,4);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(6,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,14,-1,4);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,14,-1,2);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,11,1,11);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,18,1,18);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,18,-1,2);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)c3_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _JumpTest_MDLMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_JumpTest_MDLInstanceStruct *chartInstance =
      (SFc3_JumpTest_MDLInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c3_phi);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c3_uR);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c3_motor_enable);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c3_motor_input);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c3_brake_enable);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c3_jump_event);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c3_phi_max);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c3_jump_velocity);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c3_brake_counter);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sm41yuUApuhTfHdEaK8D8LC";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_JumpTest_MDL_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 3, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c3_JumpTest_MDL(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc3_JumpTest_MDLInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc3_JumpTest_MDLInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*)
    chartInstanceVar);
  initialize_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_JumpTest_MDL(void *chartInstanceVar)
{
  enable_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_JumpTest_MDL(void *chartInstanceVar)
{
  disable_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_JumpTest_MDL(void *chartInstanceVar)
{
  sf_gateway_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c3_JumpTest_MDL(void *chartInstanceVar)
{
  ext_mode_exec_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_JumpTest_MDL(SimStruct* S)
{
  return get_sim_state_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_JumpTest_MDL(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c3_JumpTest_MDL(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_JumpTest_MDL_optimization_info();
    }

    finalize_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_JumpTest_MDL(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_JumpTest_MDL((SFc3_JumpTest_MDLInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c3_JumpTest_MDL_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x3'varName','path'{{T\"is_active_c3_JumpTest_MDL\",T\"is_active_c3_JumpTest_MDL\"},{T\"is_c3_JumpTest_MDL\",T\"is_c3_JumpTest_MDL\"},{T\"is_Jumping\",T\"Jumping.is_Jumping\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"boolean\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 6, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 4250818234U, 1179856140U, 3978882521U,
    4287810361U };

  return checksum;
}

static void mdlSetWorkWidths_c3_JumpTest_MDL(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_JumpTest_MDL_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 3);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2285049241U));
  ssSetChecksum1(S,(196401812U));
  ssSetChecksum2(S,(898178872U));
  ssSetChecksum3(S,(448647036U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_JumpTest_MDL(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_JumpTest_MDL(SimStruct *S)
{
  SFc3_JumpTest_MDLInstanceStruct *chartInstance;
  chartInstance = (SFc3_JumpTest_MDLInstanceStruct *)utMalloc(sizeof
    (SFc3_JumpTest_MDLInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_JumpTest_MDLInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_JumpTest_MDL;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_JumpTest_MDL;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_JumpTest_MDL;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_JumpTest_MDL;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_JumpTest_MDL;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_JumpTest_MDL;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_JumpTest_MDL;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_JumpTest_MDL;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_JumpTest_MDL;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_JumpTest_MDL;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_JumpTest_MDL;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c3_JumpTest_MDL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c3_JumpTest_MDL(chartInstance);
}

void c3_JumpTest_MDL_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_JumpTest_MDL(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_JumpTest_MDL(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_JumpTest_MDL(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_JumpTest_MDL_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
