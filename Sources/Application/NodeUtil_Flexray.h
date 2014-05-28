// NodeUtil.h: interface for the CNodeUtil class.

#pragma once

#include "Fibex_Defs.h"
#include <string>
#import <msxml6.dll>

#define PDU_DUMMY_2_0                   _T("BM_DUMMY_2_0_PDU")

/* INVALID VALUES */
#define INVALID_STRING                    _T("<Empty>")
/* Required node in an element*/
#define REQ_COMP_DATA                     1
#define REQ_COMPS_DATA                    1
#define REQ_DOC_REVS                      1
#define REQ_ELE_REVS                      1
#define REQ_FX_COMP_DATA                  1
#define REQ_FX_COMPS_DATA                 1
#define REQ_NM_CFGS                       1
#define REQ_PROD                          1
#define REQ_PRODS                         1
#define REQ_PROJECT_COUNT                 1
#define REQ_PROJECT_COUNT                 1
#define REQ_ROLES                         1
#define REQ_TEAM_MEM                      1
#define REQ_TEAM_MEMS                     1
#define REQ_TP_ADDRESSES                  1
#define REQ_TP_CFG                        2
#define REQ_TP_CFGS                       1
#define REQ_ELE_REVS                      1
#define REQ_NM_CFGS                       1
#define NM_CONFIGS_NODE                   _T("NM-CONFIGS")
#define NM_CONFIG_NODE                    _T("NM-CONFIG")
#define TP_CONFIGS_NODE                   _T("TP-CONFIGS")
#define TP_CONFIG_NODE                    _T("TP-CONFIG")
#define PRODUCT_REFS_NODE                 _T("PRODUCT-REFS")
#define TP_ADDRESSES_NODE                 _T("TP-ADDRESSES")
#define TP_ADDRESS_TYPE_NODE              _T("TP-ADDRESS")

#define CLUSTER_NODE                      _T("CLUSTER")
#define EXTENT_NODE                       _T("EXTENT")
#define SHORT_NAME_NODE                   _T("SHORT-NAME")
#define LONG_NAME_NODE                    _T("LONG-NAME")
#define DESCRIPTION_NODE                  _T("DESCRIPTION")
#define ELEMENT_REVISIONS_NODE            _T("ELEMENT-REVISIONS")
#define ELEMENT_REVISION_NODE             _T("ELEMENT-REVISION")
#define PRODUCT_REF_NODE                  _T("PRODUCT-REF")
#define ECU_REF_NODE                      _T("ECU-REF")
#define DIAGNOSTIC_ADDRESSES_NODE         _T("DIAGNOSTIC-ADDRESSES")
#define DIAGNOSTIC_ADDRESS_NODE           _T("DIAGNOSTIC-ADDRESS")
#define RESPONSE_ADDRESS_NODE             _T("RESPONSE-ADDRESS")
#define TP_ADDRESS_REF_NODE               _T("TP-ADDRESS-REF")
#define TP_ADDRESS_REFS_NODE              _T("TP-ADDRESS-REFS")
#define KEY_SLOT_USAGE_NODE               _T("KEY-SLOT-USAGE")
#define STARTUP_SYNC_NODE                 _T("STARTUP-SYNC")
#define SYNC_NODE                         _T("SYNC")
#define NONE_NODE                         _T("NONE")
#define MAX_DYNAMIC_PAYLOAD_LENGTH_NODE   _T("MAX-DYNAMIC-PAYLOAD-LENGTH")
#define CLUSTER_DRIFT_DAMPING_NODE        _T("CLUSTER-DRIFT-DAMPING")
#define DECODING_CORRECTION_NODE          _T("DECODING-CORRECTION")
#define MAX_DRIFT_NODE                    _T("MAX-DRIFT")
#define EXTERN_OFFSET_CORRECTION_NODE     _T("EXTERN-OFFSET-CORRECTION")
#define EXTERN_RATE_CORRECTION_NODE       _T("EXTERN-RATE-CORRECTION")
#define LATEST_TX_NODE                    _T("LATEST-TX")
#define LISTENT_TIMEOUT_NODE              _T("LISTEN-TIMEOUT")
#define SAMPLES_PER_MICROTICK_NODE        _T("SAMPLES-PER-MICROTICK")
#define OFFSET_CORRECTION_OUT_NODE        _T("OFFSET-CORRECTION-OUT")
#define RATE_CORRECTION_OUT_NODE          _T("RATE-CORRECTION-OUT")
#define DELAY_COMPENSATION_A_NODE         _T("DELAY-COMPENSATION-A")
#define DELAY_COMPENSATION_B_NODE         _T("DELAY-COMPENSATION-B")
#define WAKE_UP_PATTERN_NODE              _T("WAKE-UP-PATTERN")
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      _T("ALLOW-HALT-DUE-TO-CLOCK")
#define ALLOW_PASSIVE_TO_ACTIVE_NODE      _T("ALLOW-PASSIVE-TO-ACTIVE")
#define ACCEPTED_STARTUP_RANGE_NODE       _T("ACCEPTED-STARTUP-RANGE")
#define MACRO_INITIAL_OFFSET_A_NODE       _T("MACRO-INITIAL-OFFSET-A")
#define MACRO_INITIAL_OFFSET_B_NODE       _T("MACRO-INITIAL-OFFSET-B")
#define MICRO_INITIAL_OFFSET_A_NODE       _T("MICRO-INITIAL-OFFSET-A")
#define MICRO_INITIAL_OFFSET_B_NODE       _T("MICRO-INITIAL-OFFSET-B")
#define MICRO_PER_MACRO_NOM_NODE          _T("MICRO-PER-MACRO-NOM")
#define SINGLE_SLOT_ENABLED_NODE          _T("SINGLE-SLOT-ENABLED")
#define MICROTICK_NODE                    _T("MICROTICK")
#define SUB_FRAME_REF_NODE                _T("SUB-FRAME-REF")
#define IS_RESPONSE_ERROR_NODE            _T("IS-RESPONSE-ERROR")
#define MEDIUM_NODE                       _T("MEDIUM")
#define NUMBER_OF_CYCLES_NODE             _T("NUMBER-OF-CYCLES")
#define MAX_FRAME_LENGTH_NODE             _T("MAX-FRAME-LENGTH")
#define MANUFACTURER_EXTN_NODE            _T("MANUFACTURER-EXTENSION")
#define COMPANY_REVISION_INFOS_NODE       _T("COMPANY-REVISION-INFOS")
#define COMPANY_REVISION_INFO_NODE        _T("COMPANY-REVISION-INFO")
#define COMPANY_DATA_REF_NODE             _T("COMPANY-DATA-REF")
#define MODIFICATIONS_NODE                _T("MODIFICATIONS")
#define MODIFICATION_NODE                 _T("MODIFICATION")
#define DESC_NODE                         _T("DESC")
#define COMPANIES_DATA_NODE               _T("COMPANIES-DATA")
#define COMPANY_DATA                      _T("COMPANY-DATA")
#define FIBEX_COMPANIES_DATA              _T("FIBEX-COMPANIES-DATA")
#define MANUFACTURER_EXTENSION_NODE       _T("MANUFACTURER-EXTENSION")
#define FIBEX_COMPANY_DATA_NODE           _T("FIBEX-COMPANY-DATA")
#define LIN_COMPANY_ID_NODE               _T("LIN-COMPANY-ID")
#define PRODUCTS_NODE                     _T("PRODUCTS")
#define PRODUCT_NODE                      _T("PRODUCT")
#define ID_NODE                           _T("ID")
#define VARIANT_NODE                      _T("VARIANT")

#define PROJECT_NODE                      _T("PROJECT")
#define PROJECTS_NODE                      _T("PROJECTS")
#define PROTOCOLS_NODE                     _T("PROTOCOLS")
#define TEAM_MEMBERS_NODE                  _T("TEAM-MEMBERS")
#define TEAM_MEMBER_NODE                   _T("TEAM-MEMBER")
#define ROLES                             _T("ROLES")
#define ROLE                              _T("ROLE")
#define DEPARTMENT                        _T("DEPARTMENT")
#define ADDRESS                           _T("ADDRESS")
#define ZIP                               _T("ZIP")
#define CITY                              _T("CITY")
#define PHONE                             _T("PHONE")
#define FAX                               _T("FAX")
#define EMAIL                             _T("EMAIL")
#define HOMEPAGE                          _T("HOMEPAGE")
#define ADMIN_DATA_NODE                   _T("ADMIN-DATA")
#define DOC_REVISIONS_NODE                _T("DOC-REVISIONS")
#define DOC_REVISION_NODE                 _T("DOC-REVISION")
#define TEAM_MEMBER_REF_NODE              _T("TEAM-MEMBER-REF")
#define REVISION_LABEL_NODE               _T("REVISION-LABEL")
#define STATE_NODE                        _T("STATE")
#define DATE_NODE                         _T("DATE")
#define COMPANY_REVISION_INFOS_NODE       _T("COMPANY-REVISION-INFOS")
#define COMPANY_REVISION_INFO_NODE        _T("COMPANY-REVISION-INFO")
#define COMPANY_DATA_REF_NODE             _T("COMPANY-DATA-REF")
#define REVISION_LABEL_NODE               _T("REVISION-LABEL")
#define MODIFICATIONS_NODE                _T("MODIFICATIONS")
#define MODIFICATION_NODE                 _T("MODIFICATION")
#define CHANGE_NODE                       _T("CHANGE")
#define REASON_NODE                       _T("REASON")

/* HASH DEFINES FOR PROCESSING INFORMATION ---STARTS*/
#define PROCESSING_INFORMATION_NODE          _T("PROCESSING-INFORMATION")
#define REQUIREMENTS_NODE                    _T("REQUIREMENTS")
#define UNITS_NODE                           _T("UNITS")
#define UNITGROUPS_NODE                      _T("UNITGROUPS")
#define UNITGROUP_NODE                       _T("UNITGROUP")
#define UNIT_SPEC_NODE                       _T("UNIT-SPEC")
#define UNIT_REFS_NODE                       _T("UNIT-REFS")
#define UNIT_REF_NODE                        _T("UNIT-REF")
#define UNIT_NODE                            _T("UNIT")
#define TIME_EXP_NODE                        _T("TIME-EXP")
#define TEMPERATURE_EXP_NODE                 _T("TEMPERATURE-EXP")
#define PHYSICAL_DIMENSIONS_NODE             _T("PHYSICAL-DIMENSIONS")
#define PHYSICAL_DIMENSION_REF_NODE          _T("PHYSICAL-DIMENSION-REF")
#define PHYSICAL_DIMENSION_NODE              _T("PHYSICAL-DIMENSION")
#define OFFSET_SI_TO_UNIT_NODE               _T("OFFSET-SI_TO-UNIT")
#define MOLAR_EXP_NODE                       _T("MOLAR-AMOUNT-EXP")
#define MASS_EXP_NODE                        _T("MASS-EXP")
#define LUMINOUS_INTENSITY_EXP_NODE          _T("LUMINOUS-INTENSITY-EXP")
#define LENGTH_EXP_NODE                      _T("LENGTH-EXP")
#define FACTOR_SI_TO_UNIT_NODE               _T("FACTOR-SI_TO-UNIT")
#define DISPLAY_NAME_NODE                    _T("DISPLAY-NAME")
#define CURRENT_EXP_NODE                     _T("CURRENT-EXP")
#define CODINGS_NODE                         _T("CODINGS")
#define CODING_NODE                          _T("CODING")
#define CATEGORY_NODE                        _T("CATEGORY")
#define BIT_LENGTH_NODE                      _T("BIT-LENGTH")
#define CODED_TYPE_NODE                      _T("CODED-TYPE")
#define COMPU_METHODS_NODE                   _T("COMPU-METHODS")
#define MANUFACTURE_CODING_EXTENSION_NODE    _T("MANUFACTURE-CODING-EXTENSION")
#define MAX_LENGTH_NODE                      _T("MAX-LENGTH")
#define MIN_LENGTH_NODE                      _T("MIN-LENGTH")
#define PHYSICAL_TYPE_NODE                   _T("PHYSICAL-TYPE")
#define COMPU_CONST_NODE              _T("COMPU-CONST")
#define COMPU_DEFAULT_VALUE_NODE      _T("COMPU-DEFAULT-VALUE")
#define COMPU_DENOMINATOR_NODE        _T("COMPU-DENOMINATOR")
#define COMPU_GENERIC_MATH_NODE       _T("COMPU-GENERIC-MATH")
#define COMPU_INTERNAL_TO_PHYS_NODE   _T("COMPU-INTERNAL-TO-PHYS")
#define COMPU_NUMERATOR_NODE          _T("COMPU-NUMERATOR")
#define COMPU_RATIONAL_COEFFS_NODE    _T("COMPU-RATIONAL-COEFFS")
#define COMPU_SCALE_NODE              _T("COMPU-SCALE")
#define COMPU_SCALES_NODE             _T("COMPU-SCALES")
#define INTERNAL_CONSTRS_NODE         _T("INTERNAL-CONSTRS")
#define LOWER_LIMIT_NODE              _T("LOWER-LIMIT")
#define PHYS_CONSTRS_NODE             _T("PHYS-CONSTRS")
#define UPPER_LIMIT_NODE              _T("UPPER-LIMIT")
#define V_NODE                        _T("V")
#define VT_NODE                       _T("VT")
#define LOWER_LIMIT_NODE              _T("LOWER-LIMIT")
#define UPPER_LIMIT_NODE              _T("UPPER-LIMIT")
#define V_NODE                        _T("V")
#define COMPU_METHOD_NODE             _T("COMPU-METHOD")

#define MUX_SWITCH            _T("SWITCH")
#define MUX_STATIC            _T("STATIC")


#define MIN_MAX_LEN                          1
#define BIT_LEN                              0

/* HASH DEFINES FOR PROCESSING INFORMATION ---ENDS*/

/* HASH DEFINES FOR ELEMENTS ---STARTS */
#define SPEED_NODE                        _T("SPEED")
#define IS_HL_BIT_ODR_NODE                _T("IS-HIGH-LOW-BIT-ORDER")
#define BIT_CNTING_POLICY_NODE            _T("BIT-COUNTING-POLICY")
#define PROTOCOL_NODE                     _T("PROTOCOL")
#define PROTOCOL_VER_TYPE_NODE            _T("PROTOCOL-VERSION-TYPE")
#define PHYSICAL_TYPE_NODE                _T("PHYSICAL-TYPE")
#define PHYSICAL_VER_NODE                 _T("PROTOCOL-VERSION")
#define CHANNEL_REFS_NODE                 _T("CHANNEL-REFS")
#define CONTROLLER_REFS_NODE              _T("CONTROLLER-REFS")
#define CONTROLLER_REF_NODE               _T("CONTROLLER-REF")
#define CHANNEL_REF_NODE                  _T("CHANNEL-REF")
#define COLD_START_ATTEMPTS_NODE          _T("COLD-START-ATTEMPTS")
#define ACTION_POINT_OFFSET_NODE          _T("ACTION-POINT-OFFSET")
#define DYNAMIC_SLOT_IDLE_PHASE_NODE      _T("DYNAMIC-SLOT-IDLE-PHASE")
#define MINISLOT_NODE                     _T("MINISLOT")
#define MINISLOT_ACTION_PT_OFFSET_NODE    _T("MINISLOT-ACTION-POINT-OFFSET")
#define N_I_T_NODE                        _T("N-I-T")
#define SAMPLE_CLOCK_PERIOD_NODE          _T("SAMPLE-CLOCK-PERIOD")
#define STATIC_SLOT_NODE                  _T("STATIC-SLOT")
#define SYMBOL_WINDOW_NODE                _T("SYMBOL-WINDOW")
#define T_S_S_TRANSMITTER_NODE            _T("T-S-S-TRANSMITTER")
#define WAKE_UP_NODE                      _T("WAKE-UP")
#define WAS_RX_IDLE_NODE                  _T("WAKE-UP-SYMBOL-RX-IDLE")
#define WAS_RX_LOW_NODE                   _T("WAKE-UP-SYMBOL-RX-LOW")
#define WAS_RX_WINDOW_NODE                _T("WAKE-UP-SYMBOL-RX-WINDOW")
#define WAS_TX_IDLE_NODE                  _T("WAKE-UP-SYMBOL-TX-IDLE")
#define WAS_TX_LOW_NODE                   _T("WAKE-UP-SYMBOL-TX-LOW")
#define LISTEN_NOISE_NODE                 _T("LISTEN-NOISE")
#define MACRO_PER_CYCLE_NODE              _T("MACRO-PER-CYCLE")
#define MACROTICK_NODE                    _T("MACROTICK")
#define MAX_INITZN_ERROR_NODE             _T("MAX-INITIALIZATION-ERROR")
#define MAX_WITOUT_CLK_CORR_FATAL_NODE    _T("MAX-WITHOUT-CLOCK-CORRECTION-FATAL")
#define MAX_WITOUT_CLK_CORR_PASSIVE_NODE  _T("MAX-WITHOUT-CLOCK-CORRECTION-PASSIVE")
#define NET_MGNT_VECT_LEGTH_NODE          _T("NETWORK-MANAGEMENT-VECTOR-LENGTH")
#define NUMBER_OF_MINISLOTS_NODE          _T("NUMBER-OF-MINISLOTS")
#define NUMBER_OF_STATIC_SLOTS_NODE       _T("NUMBER-OF-STATIC-SLOTS")
#define OFFSET_CORRECTION_START_NODE      _T("OFFSET-CORRECTION-START")
#define PAYLOAD_LENGTH_STATIC_NODE        _T("PAYLOAD-LENGTH-STATIC")
#define SYNC_NODE_MAX_NODE                _T("SYNC-NODE-MAX")
#define CAS_RX_LOW_MAX_NODE               _T("CAS-RX-LOW-MAX")
#define BIT_NODE                          _T("BIT")
#define CYCLE_NODE                        _T("CYCLE")
#define CLUSTER_DRIFT_DAMPING_NODE        _T("CLUSTER-DRIFT-DAMPING")

#define CLUSTERS_NODE                     _T("CLUSTERS")
#define CHANNELS_NODE                     _T("CHANNELS")
#define CHANNEL_NODE                      _T("CHANNEL")
#define GATEWAYS_NODE                     _T("GATEWAYS")
#define GATEWAY_NODE                      _T("GATEWAY")
#define PDU_TRIGGERINGS_NODE              _T("PDU-TRIGGERINGS")
#define FRAME_TRIGGERINGS_NODE            _T("FRAME-TRIGGERINGS")
#define PDU_TRIGGERING_NODE               _T("PDU-TRIGGERING")
#define FRAME_TRIGGERING_NODE             _T("FRAME-TRIGGERING")
#define PDU_REF_NODE                      _T("PDU-REF")
#define TIMINGS_NODE                      _T("TIMINGS")
#define CYCLIC_TIMING_NODE                _T("CYCLIC-TIMING")
#define REPEATING_TIME_RANGE_NODE         _T("REPEATING-TIME-RANGE")
#define STARTING_TIME_RANGE_NODE          _T("STARTING-TIME-RANGE")
#define VALUE_NODE                        _T("VALUE")
#define DESC_NODE                         _T("DESC")
#define TOLERANCE_NODE                    _T("TOLERANCE")
#define MIN_VALUE_NODE                    _T("MIN-VALUE")
#define MAX_VALUE_NODE                    _T("MAX-VALUE")
#define START_CONDITION_NODE              _T("START-CONDITION")
#define ACTIVE_CONDITION_NODE             _T("ACTIVE-CONDITION")
#define SEND_CONDITION_NODE               _T("SEND-CONDITION")
#define STOP_CONDITION_NODE               _T("STOP-CONDITION")
#define FINAL_REPETITIONS_NODE            _T("FINAL-REPETITIONS")
#define MANUFACTURER_CLC_TMG_EXTN_NODE    _T("MANUFACTURER-CYCLIC-TIMING-EXTENSION")
#define MANU_EVENT_CTRLLED_TMG_EXTN_NODE  _T("MANUFACTURER-EVENT-CONTROLLED-TIMING-EXTENSION")
#define MANU_REQ_CTRLLED_TMG_EXTN_NODE    _T("MANUFACTURER-REQ-CONTROLLED-TIMING-EXTENSION")
#define MANU_PDU_TRIGGERING_EXTN_NODE     _T("MANUFACTURER-PDU-TRIGGERING-EXTENSION")
#define MANU_FRAME_TRIGGERING_EXTN_NODE   _T("MANUFACTURER-FRAME-TRIGGERING-EXTENSION")
#define MANU_REL_SCH_TMG_EXTN_NODE        _T("MANUFACTURER-RELATIVELY-SCHEDULED-TIMING-EXTENSION")
#define MANU_ABS_SCH_TMG_EXTN_NODE        _T("MANUFACTURER-ABSOLUTELY-SCHEDULED-TIMING-EXTENSION")
#define MANU_IDENTIFIER_EXTN_NODE         _T("MANUFACTURER-IDENTIFIER-EXTENSION")
#define MANU_GATEWAY_EXTN_NODE            _T("MANUFACTURER-GATEWAY-EXTENSION")
#define MANU_ECU_EXTN_NODE                _T("MANUFACTURER-ECU-EXTENSION")
#define MANU_PDU_EXTN_NODE                _T("MANUFACTURER-PDU-EXTENSION")
#define MANU_CONTROLLER_EXTN_NODE         _T("MANUFACTURER-CONTROLLER-EXTENSION")
#define MANU_PORT_EXTN_NODE               _T("MANUFACTURER-PORT-EXTENSION")
#define MANU_CHANNEL_EXTN_NODE            _T("MANUFACTURER-CHANNEL-EXTENSION")
#define MANU_CONNECTOR_EXTN_NODE          _T("MANUFACTURER-CONNECTOR-EXTENSION")
#define MANU_SIG_INST_EXTN_NODE           _T("MANUFACTURER-SIGNAL-INSTANCE-EXTENSION")
#define MANU_SWITCH_EXTN_NODE             _T("MANUFACTURER-SWITCH-EXTENSION")
#define MANU_DATA_EXTN_NODE               _T("MANUFACTURE-DATA-EXTENSION")
#define MANU_SUBFRAME_EXTN_NODE           _T("MANUFACTURE-SUB-FRAME-EXTENSION")
#define MANU_MUX_PART_EXTN_NODE           _T("MANUFACTURER-MUX-PART-EXTENSION")
#define MANU_PDU_INST_EXTN_NODE           _T("MANUFACTURER-PDU-INSTANCE-EXTENSION")
#define MANU_FRAME_EXTN_NODE              _T("MANUFACTURER-FRAME-EXTENSION")
#define SUB_FRAMES_NODE                   _T("SUB-FRAMES")
#define SUB_FRAME_NODE                    _T("SUB-FRAME")
#define MANU_FUNCTION_EXTN_NODE           _T("MANUFACTURER-FUNCTION-EXTENSION")
#define MANU_SIGNAL_EXTN_NODE             _T("MANUFACTURER-SIGNAL-EXTENSION")
#define MANU_PORT_REQ_EXTN_NODE           _T("MANUFACTURER-PORT-REQ-EXTENSION")
#define MANU_FUN_REQ_EXTN_NODE            _T("MANUFACTURER-FUNCTION-REQ-EXTENSION")
#define MANU_COMPOSITE_EXTN_NODE          _T("MANUFACTURER-COMPOSITE-EXTENSION")
#define MANU_IDENTIFIER_EXTN_NODE         _T("MANUFACTURER-IDENTIFIER-EXTENSION")
#define MANU_SIGNAL_GROUP_EXTN_NODE       _T("MANUFACTURER-SIGNAL-GROUP-EXTENSION")
#define MANU_CODING_EXTN_NODE             _T("MANUFACTURER-CODING-EXTENSION")
#define MANUFACTURER_EXTENSION_NODE       _T("MANUFACTURER-EXTENSION")
#define SYSTEM_TRIGGER_NODE               _T("SYSTEM-TRIGGER")
#define SIGNAL_TRIGGER_NODE               _T("SIGNAL-TRIGGER")
#define SYSTEM_STATE_NODE                 _T("SYSTEM-STATE")
#define SIGNAL_STATE_NODE                 _T("SIGNAL-STATE")
#define SIGNAL_INSTANCE_NODE              _T("SIGNAL-INSTANCE")
#define EVENT_CONTROLLED_TIMING_NODE      _T("EVENT-CONTROLLED-TIMING")
#define REQUEST_CONTROLLED_TIMING_NODE    _T("REQUEST-CONTROLLED-TIMING")
#define DEBOUNCE_TIME_RANGE_NODE          _T("DEBOUNCE-TIME-RANGE")
#define RESPONSE_TIME_RANGE_NODE          _T("RESPONSE-TIME-RANGE")
#define FRAME_REF_NODE                    _T("FRAME-REF")
#define IDENTIFIER_NODE                   _T("IDENTIFIER")
#define IDENTIFIER_VALUE_NODE             _T("IDENTIFIER-VALUE")
#define ABSOLUTELY_SCHLD_TIMING_NODE      _T("ABSOLUTELY-SCHEDULED-TIMING")
#define RELATIVELY_SCHLD_TIMING_NODE      _T("RELATIVELY-SCHEDULED-TIMING")
#define SLOT_ID_NODE                      _T("SLOT-ID")
#define DELAY_NODE                        _T("DELAY")
#define SCHEDULED_TABLE_NAME_NODE         _T("SCHEDULED-TABLE-NAME")
#define POSITIVE_IN_TABLE_NODE            _T("POSITIVE-IN-TABLE")
#define BASE_CYCLE_NODE                   _T("BASE-CYCLE")
#define CYCLE_NUM_NODE                    _T("CYCLE-NUMBER")
#define CYCLE_REPETITION_NODE             _T("CYCLE-REPETITION")
#define FLEXRAY_CHANNEL_NAME_NODE         _T("FLEXRAY-CHANNEL-NAME")

#define FRAMES_NODE                       _T("FRAMES")
#define FRAME_NODE                        _T("FRAME")
#define FRAME_TYPE_NODE                   _T("FRAME-TYPE")
#define PDU_INSTANCES_NODE                _T("PDU-INSTANCES")
#define PDU_INSTANCE_NODE                 _T("PDU-INSTANCE")
#define PDU_REF_NODE                      _T("PDU-REF")
#define PDU_UPDATE_BIT_POS_NODE           _T("PDU-UPDATE-BIT-POSITION")
#define BIT_POSITION_NODE                 _T("BIT-POSITION")
#define IS_HIGH_LOW_BYTE_ODR_NODE         _T("IS-HIGH-LOW-BYTE-ORDER")
#define BYTE_LENGTH_NODE                  _T("BYTE-LENGTH")
#define SEQUENCE_NUMBER_NODE              _T("SEQUENCE-NUMBER")

#define FUNCTIONS_NODE                    _T("FUNCTIONS")
#define FUNCTION_NODE                     _T("FUNCTION")
#define INPUT_PORTS_NODE                  _T("INPUT-PORTS")
#define OUTPUT_PORTS_NODE                 _T("OUTPUT-PORTS")
#define INPUT_PORT_NODE                   _T("INPUT-PORT")
#define OUTPUT_PORT_NODE                  _T("OUTPUT-PORT")
#define WAKE_UP_CHANNEL_NODE              _T("WAKE-UP-CHANNEL")
#define SIGNALS_NODE                      _T("SIGNALS")
#define SIGNAL_NODE                       _T("SIGNAL")
#define CODING_REF_NODE                   _T("CODING-REF")
#define DEFAULT_VALUE_NODE                _T("DEFAULT-VALUE")
#define SIGNAL_TYPE_NODE                  _T("SIGNAL-TYPE")
#define TYPE_NODE                         _T("TYPE")
#define METHOD_NODE                       _T("METHOD")
#define ATTRIBUTES_NODE                   _T("ATTRIBUTES")
#define ATTRIBUTE_NODE                    _T("ATTRIBUTE")
#define PRIORITY_NODE                     _T("PRIORITY")
#define ECU_SENDING_BEHAVIORS_NODE        _T("ECU-SENDING-BEHAVIORS")
#define ECU_SENDING_BEHAVIOR_NODE         _T("ECU-SENDING-BEHAVIOR")
#define SIGNAL_REF_NODE                   _T("SIGNAL-REF")

#define COMPOSITES_NODE                   _T("COMPOSITES")
#define COMPOSITE_NODE                    _T("COMPOSITE")
#define COMPOSITION_LEVEL_NODE            _T("COMPOSITION-LEVEL")
#define COMPOSITE_REFS_NODE               _T("COMPOSITE-REFS")
#define COMPOSITE_REF_NODE                _T("COMPOSITE-REF")
#define PDU_REFS_NODE                     _T("PDU-REFS")
#define ECU_REFS_NODE                     _T("ECU-REFS")
#define SIGNAL_REFS_NODE                  _T("SIGNAL-REFS")
#define FUNCTION_REFS_NODE                _T("FUNCTION-REFS")
#define FUNCTION_REF_NODE                 _T("FUNCTION-REF")

#define ECUS_NODE                         _T("ECUS")
#define ECU_NODE                          _T("ECU")
#define FUNCTION_REFS_NODE                _T("FUNCTION-REFS")
#define CONTROLLERS_NODE                  _T("CONTROLLERS")
#define CONNECTORS_NODE                   _T("CONNECTORS")
#define CONTROLLER_NODE                   _T("CONTROLLER")
#define CONNECTOR_NODE                    _T("CONNECTOR")
#define FUNCTION_REF_NODE                 _T("FUNCTION-REF")
#define VENDOR_NAME_NODE                  _T("VENDOR-NAME")
#define CHIP_NAME_NODE                    _T("CHIP-NAME")
#define TRANSCEIVER_NODE                  _T("TRANSCEIVER")
#define TRANSMISSION_IMPEDANCE_NODE       _T("TRANSMISSION-IMPEDANCE")
#define KEY_SLOT_USAGE_NODE               _T("KEY-SLOT-USAGE")
#define STARTUP_SYNC_NODE                 _T("STARTUP-SYNC")
#define SYNC_NODE                         _T("SYNC")
#define MAX_DYNAMIC_PAYLOAD_LENGTH_NODE   _T("MAX-DYNAMIC-PAYLOAD-LENGTH")
#define CLUSTER_DRIFT_DAMPING_NODE        _T("CLUSTER-DRIFT-DAMPING")
#define DECODING_CORRECTION_NODE          _T("DECODING-CORRECTION")
#define MAX_DRIFT_NODE                    _T("MAX-DRIFT")
#define EXTERN_OFFSET_CORRECTION_NODE     _T("EXTERN-OFFSET-CORRECTION")
#define EXTERN_RATE_CORRECTION_NODE       _T("EXTERN-RATE-CORRECTION")
#define LATEST_TX_NODE                    _T("LATEST-TX")
#define LISTENT_TIMEOUT_NODE              _T("LISTEN-TIMEOUT")
#define SAMPLES_PER_MICROTICK_NODE        _T("SAMPLES-PER-MICROTICK")
#define OFFSET_CORRECTION_OUT_NODE        _T("OFFSET-CORRECTION-OUT")
#define RATE_CORRECTION_OUT_NODE          _T("RATE-CORRECTION-OUT")
#define DELAY_COMPENSATION_A_NODE         _T("DELAY-COMPENSATION-A")
#define DELAY_COMPENSATION_B_NODE         _T("DELAY-COMPENSATION-B")
#define WAKE_UP_PATTERN_NODE              _T("WAKE-UP-PATTERN")
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      _T("ALLOW-HALT-DUE-TO-CLOCK")
#define ALLOW_PASSIVE_TO_ACTIVE_NODE      _T("ALLOW-PASSIVE-TO-ACTIVE")
#define ACCEPTED_STARTUP_RANGE_NODE       _T("ACCEPTED-STARTUP-RANGE")
#define MACRO_INITIAL_OFFSET_A_NODE       _T("MACRO-INITIAL-OFFSET-A")
#define MACRO_INITIAL_OFFSET_B_NODE       _T("MACRO-INITIAL-OFFSET-B")
#define MICRO_INITIAL_OFFSET_A_NODE       _T("MICRO-INITIAL-OFFSET-A")
#define MICRO_INITIAL_OFFSET_B_NODE       _T("MICRO-INITIAL-OFFSET-B")
#define MICRO_PER_MACRO_NOM_NODE          _T("MICRO-PER-MACRO-NOM")
#define SINGLE_SLOT_ENABLED_NODE          _T("SINGLE-SLOT-ENABLED")
#define MICROTICK_NODE                    _T("MICROTICK")

#define MICRO_PER_CYCLE_NODE              _T("MICRO-PER-CYCLE")
#define OFFSET_CORRECTION_OUT_NODE        _T("OFFSET-CORRECTION-OUT")
#define RATE_CORRECTION_OUT_NODE          _T("RATE-CORRECTION-OUT")
#define DELAY_COMPENSATION_A_NODE         _T("DELAY-COMPENSATION-A")
#define DELAY_COMPENSATION_B_NODE         _T("DELAY-COMPENSATION-B")
#define WAKE_UP_PATTERN_NODE              _T("WAKE-UP-PATTERN")
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      _T("ALLOW-HALT-DUE-TO-CLOCK")
#define CHANNEL_REF_NODE                  _T("CHANNEL-REF")
#define CONTROLLER_REF_NODE               _T("CONTROLLER-REF")
#define INPUTS_NODE                       _T("INPUTS")
#define INPUT_NODE                        _T("INPUT")
#define INPUT_PORT_NODE                   _T("INPUT-PORT")
#define OUTPUTS_NODE                      _T("OUTPUTS")
#define OUTPUT_NODE                       _T("OUTPUT")
#define WAKE_UP_CHANNEL_NODE              _T("WAKE-UP-CHANNEL")
#define OUTPUT_PORT_NODE                  _T("OUTPUT-PORT")
#define FRAME_TRIGGERING_REF_NODE         _T("FRAME-TRIGGERING-REF")
#define INCLUDED_PDUS_NODE                _T("INCLUDED-PDUS")
#define COMPLETE_FRAME_NODE               _T("COMPLETE-FRAME")
#define COMPLETE_PDU_NODE                 _T("COMPLETE-PDU")
#define INCLUDED_PDU_NODE                 _T("INCLUDED-PDU")
#define INCLUDED_SIGNALS_NODE             _T("INCLUDED-SIGNALS")
#define INCLUDED_SIGNAL_NODE              _T("INCLUDED-SIGNAL")
#define SIGNAL_INSTANCE_REF_NODE          _T("SIGNAL-INSTANCE-REF")
#define PDU_TRIGGERING_REF_NODE           _T("PDU-TRIGGERING-REF")

#define PDUS_NODE                         _T("PDUS")
#define PDU_NODE                          _T("PDU")
#define BYTE_LENGTH_NODE                  _T("BYTE-LENGTH")
#define PDU_TYPE_NODE                     _T("PDU-TYPE")
#define SIGNAL_INSTANCES_NODE             _T("SIGNAL-INSTANCES")
#define SIGNAL_INSTANCE_NODE              _T("SIGNAL-INSTANCE")
#define BIT_POSITION_NODE                 _T("BIT-POSITION")
#define IS_HIGH_LOW_BYTE_ODR_NODE         _T("IS-HIGH-LOW-BYTE-ORDER")
#define SIGNAL_REF_NODE                   _T("SIGNAL-REF")
#define SIGNAL_UPDATE_BIT_POS_NODE        _T("SIGNAL-UPDATE-BIT-POSITION")
#define SEQUENCE_NUMBER_NODE              _T("SEQUENCE-NUMBER")
#define MULTIPLEXER_NODE                  _T("MULTIPLEXER")
#define MULTIPLEXERS_NODE                 _T("MULTIPLEXERS")
#define SWITCH_NODE                       _T("SWITCH")
#define DATA_NODE                         _T("DATA")
#define DYNAMIC_PART_NODE                 _T("DYNAMIC-PART")
#define STATIC_PART_NODE                  _T("STATIC-PART")
#define BIT_LENGTH_NODE                   _T("BIT-LENGTH")
#define SEGMENT_POSITIONS_NODE            _T("SEGMENT-POSITIONS")
#define SEGMENT_POSITION_NODE             _T("SEGMENT-POSITION")
#define SWITCHED_PDU_INSTANCES_NODE       _T("SWITCHED-PDU-INSTANCES")
#define SWITCHED_PDU_INSTANCE_NODE        _T("SWITCHED-PDU-INSTANCE")
#define PDU_REF_NODE                      _T("PDU-REF")
#define SWITCH_CODE_NODE                  _T("SWITCH-CODE")
#define STATIC_PDU_INSTANCE_NODE          _T("STATIC-PDU-INSTANCE")
#define BIT_LENGTH_NODE                   _T("BIT-LENGTH")
#define CYCLE_COUNTER_NODE                _T("CYCLE-COUNTER")

/* HASH DEFINES FOR ELEMENTS ---ENDS */
/* HASH DEFINES FOR REQUIREMENTS ---STARTS*/

#define COMMON_LAYOUT_DETAILS_NODE                     _T("COMMON-LAYOUT-DETAILS")
#define CYCLE_OFFSET_NODE                              _T("CYCLE-OFFSET")
#define CYCLE_PERIOD_NODE                              _T("CYCLE-PERIOD")
#define DEADLINE_NODE                                  _T("DEADLINE")
#define ECU_INPUT_PORT_REF_NODE                        _T("ECU-INPUT-PORT-REF")
#define FUNC_INPUT_PORT_REF_NODE                       _T("FUNC-INPUT-PORT-REF")
#define FUNC_OUTPUT_PORT_REF_NODE                      _T("FUNC-OUTPUT-PORT-REF")
#define FUNCTION_REQ_NODE                              _T("FUNCTION-REQ")
#define FUNCTION_REQS_NODE                             _T("FUNCTION-REQS")
#define GENERATION_TYPE_NODE                           _T("GENERATION-TYPE")
#define IS_HIGH_LOW_BYTE_ORDER_NODE                    _T("IS-HIGH-LOW-BYTE-ORDER")
#define MANUFACTURER_FUNCTION_REQ_EXTENSION_NODE       _T("MANUFACTURER-FUNCTION-REQ-EXTENSION")
#define MANUFACTURER_PORT_REQ_EXTENSION_NODE           _T("MANUFACTURER-PORT-REQ-EXTENSION")
#define MANUFACTURER_SIGNAL_GROUP_EXTENSION_NODE       _T("MANUFACTURER-SIGNAL-GROUP-EXTENSION")
#define MAX_AGE_NODE                                   _T("MAX-AGE")
#define ORDERED_SIGNAL_NODE                            _T("ORDERED-SIGNAL")
#define ORDERED_SIGNALS_NODE                           _T("ORDERED-SIGNALS")
#define PDU_REQ_NODE                                   _T("PDU-REQ")
#define PDU_REQS_NODE                                  _T("PDU-REQS")
#define PORT_REFS_NODE                                 _T("PORT-REFS")
#define PORT_REQ_NODE                                  _T("PORT-REQ")
#define PORT_REQS_NODE                                 _T("PORT-REQS")
#define REDUNDANCY_LVL_NODE                            _T("REDUNDANCY-LVL")
#define SIGNAL_GROUP_NODE                              _T("SIGNAL-GROUP")
#define SIGNAL_GROUPS_NODE                             _T("SIGNAL-GROUPS")
#define W_C_E_T_NODE                                   _T("W-C-E-T")
#define CYCLE_OFFSET_NODE                              _T("CYCLE-OFFSET")
#define CYCLE_PERIOD_NODE                              _T("CYCLE-PERIOD")
#define PDU_REQ_DIRECTION_TYPE_NODE                    _T("PDU-REQ-DIRECTION-TYPE")
#define PDU_TRIGGERING_REFS_NODE                       _T("PDU-TRIGGERING-REFS")
#define PDU_TRIGGERING_REF_NODE                        _T("PDU-TRIGGERING-REF")

/* HASH DEFINES FOR REQUIREMENTS ---ENDS*/
class CNodeUtil
{
public:
    CNodeUtil();
    virtual ~CNodeUtil();

    static bool bReadAttribute(MSXML2::IXMLDOMNode* iNode, std::string& omAttribute, _bstr_t temp);
    static bool bRemoveTag(const std::string omSrcString, std::string& omDestString);


    static BOOL bCreateNode(MSXML2::IXMLDOMElementPtr& pChildNode, std::string omNodeName,
                            std::string omNameSpace, std::string omNodeval);
    static BOOL bAddAttribToNode(MSXML2::IXMLDOMElementPtr& pNode,
                                 std::string omAttribName, std::string omAttribVal);
    static bool bAddNodeWithOneAttrib(MSXML2::IXMLDOMElementPtr& pNodeElement, std::string omNodeName,
                                      std::string omNameSpace, std::string omNodeVal,
                                      std::string omAttribName, std::string omAttribVal);
    static bool bAddChildToNode(MSXML2::IXMLDOMElementPtr& pNodeElement, std::string omNodeName,
                                std::string omNameSpace, std::string omNodeval);
    static bool bAddID_OID_Attrib(std::string strID, std::string strOID,
                                  MSXML2::IXMLDOMElementPtr& pNodeElement);
    static bool bAddRefrences(MSXML2::IXMLDOMElementPtr& pMainParent, std::string omMainNodeName,
                              std::string omSubNodeName, CStringArray& omRefArray);
    static std::string omAddNameSpaceExt(std::string omNameSpace, std::string omNodeName);
};
