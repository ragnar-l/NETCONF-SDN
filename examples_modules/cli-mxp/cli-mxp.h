#ifndef _H_cli_mxp
#define _H_cli_mxp
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.11-0

  Combined SIL header
  module cli-mxp
  revision 2018-06-24
  namespace http://fulgor.com/ns/cli-mxp

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_cli_mxp_M_cli_mxp (const xmlChar *)"cli-mxp"
#define y_cli_mxp_R_cli_mxp (const xmlChar *)"2018-06-24"

#define y_cli_mxp_N_Amp_stat (const xmlChar *)"Amp_stat"
#define y_cli_mxp_N_BCD_Enabled (const xmlChar *)"BCD_Enabled"
#define y_cli_mxp_N_BER_Estimate (const xmlChar *)"BER_Estimate"
#define y_cli_mxp_N_BOARD_HUM (const xmlChar *)"BOARD_HUM"
#define y_cli_mxp_N_BOARD_TEMP (const xmlChar *)"BOARD_TEMP"
#define y_cli_mxp_N_CD_Compensation_ps_nm (const xmlChar *)"CD_Compensation_ps_nm"
#define y_cli_mxp_N_CONVERGED (const xmlChar *)"CONVERGED"
#define y_cli_mxp_N_Coarse_Carrier_Lock (const xmlChar *)"Coarse_Carrier_Lock"
#define y_cli_mxp_N_Collision (const xmlChar *)"Collision"
#define y_cli_mxp_N_DSP_Initialized (const xmlChar *)"DSP_Initialized"
#define y_cli_mxp_N_DSP_running (const xmlChar *)"DSP_running"
#define y_cli_mxp_N_EOL_ALM (const xmlChar *)"EOL_ALM"
#define y_cli_mxp_N_FPGA (const xmlChar *)"FPGA"
#define y_cli_mxp_N_High_Rx_Power_Alarm (const xmlChar *)"High_Rx_Power_Alarm"
#define y_cli_mxp_N_High_Tx_Power_Alarm (const xmlChar *)"High_Tx_Power_Alarm"
#define y_cli_mxp_N_INFO (const xmlChar *)"INFO"
#define y_cli_mxp_N_Interrupt (const xmlChar *)"Interrupt"
#define y_cli_mxp_N_LATCHED_TXFIFO_ERR (const xmlChar *)"LATCHED_TXFIFO_ERR"
#define y_cli_mxp_N_LOP (const xmlChar *)"LOP"
#define y_cli_mxp_N_LOS (const xmlChar *)"LOS"
#define y_cli_mxp_N_LS_BIAS_ALM (const xmlChar *)"LS_BIAS_ALM"
#define y_cli_mxp_N_LS_POW_ALM (const xmlChar *)"LS_POW_ALM"
#define y_cli_mxp_N_LS_TEMP_ALM (const xmlChar *)"LS_TEMP_ALM"
#define y_cli_mxp_N_LS_WAV_ALM (const xmlChar *)"LS_WAV_ALM"
#define y_cli_mxp_N_LVDIGITAL (const xmlChar *)"LVDIGITAL"
#define y_cli_mxp_N_Laser_Fault (const xmlChar *)"Laser_Fault"
#define y_cli_mxp_N_Local_Oscillator_running (const xmlChar *)"Local_Oscillator_running"
#define y_cli_mxp_N_Loss (const xmlChar *)"Loss"
#define y_cli_mxp_N_Low_Rx_Power_Alarm (const xmlChar *)"Low_Rx_Power_Alarm"
#define y_cli_mxp_N_Low_Tx_Power_Alarm (const xmlChar *)"Low_Tx_Power_Alarm"
#define y_cli_mxp_N_MOD_BIAS_ALM (const xmlChar *)"MOD_BIAS_ALM"
#define y_cli_mxp_N_MOD_TEMP_ALM (const xmlChar *)"MOD_TEMP_ALM"
#define y_cli_mxp_N_MSE_XI (const xmlChar *)"MSE_XI"
#define y_cli_mxp_N_MSE_XQ (const xmlChar *)"MSE_XQ"
#define y_cli_mxp_N_MSE_YI (const xmlChar *)"MSE_YI"
#define y_cli_mxp_N_MSE_YQ (const xmlChar *)"MSE_YQ"
#define y_cli_mxp_N_MSE_below_threshold (const xmlChar *)"MSE_below_threshold"
#define y_cli_mxp_N_Max_Bulk_CD_Compensation_ps_nm (const xmlChar *)"Max_Bulk_CD_Compensation_ps_nm"
#define y_cli_mxp_N_Min_Bulk_CD_Compensation_ps_nm (const xmlChar *)"Min_Bulk_CD_Compensation_ps_nm"
#define y_cli_mxp_N_N5P2VDIGITAL (const xmlChar *)"N5P2VDIGITAL"
#define y_cli_mxp_N_N5V2ANALOG (const xmlChar *)"N5V2ANALOG"
#define y_cli_mxp_N_P3P3VANALOG (const xmlChar *)"P3P3VANALOG"
#define y_cli_mxp_N_P3P3VDIGITAL (const xmlChar *)"P3P3VDIGITAL"
#define y_cli_mxp_N_P5VANALOG (const xmlChar *)"P5VANALOG"
#define y_cli_mxp_N_PIN (const xmlChar *)"PIN"
#define y_cli_mxp_N_POUT (const xmlChar *)"POUT"
#define y_cli_mxp_N_PRBS_ERR_DET (const xmlChar *)"PRBS_ERR_DET"
#define y_cli_mxp_N_PSUMMARY (const xmlChar *)"PSUMMARY"
#define y_cli_mxp_N_Presence (const xmlChar *)"Presence"
#define y_cli_mxp_N_Presence_of_light (const xmlChar *)"Presence_of_light"
#define y_cli_mxp_N_RXALM_INT (const xmlChar *)"RXALM_INT"
#define y_cli_mxp_N_RXPOW_ALM (const xmlChar *)"RXPOW_ALM"
#define y_cli_mxp_N_RXS (const xmlChar *)"RXS"
#define y_cli_mxp_N_RX_LOCK_ERR (const xmlChar *)"RX_LOCK_ERR"
#define y_cli_mxp_N_RX_LOS (const xmlChar *)"RX_LOS"
#define y_cli_mxp_N_Ready (const xmlChar *)"Ready"
#define y_cli_mxp_N_Rx_CDR_Loss_of_Lock (const xmlChar *)"Rx_CDR_Loss_of_Lock"
#define y_cli_mxp_N_Rx_Power_dBm (const xmlChar *)"Rx_Power_dBm"
#define y_cli_mxp_N_Step_Size_ps_nm (const xmlChar *)"Step_Size_ps_nm"
#define y_cli_mxp_N_T41_Around (const xmlChar *)"T41_Around"
#define y_cli_mxp_N_T41_TS0 (const xmlChar *)"T41_TS0"
#define y_cli_mxp_N_T41_TS1 (const xmlChar *)"T41_TS1"
#define y_cli_mxp_N_T41_TS2 (const xmlChar *)"T41_TS2"
#define y_cli_mxp_N_TX_ALM_INT (const xmlChar *)"TX_ALM_INT"
#define y_cli_mxp_N_TX_DSC_ERR (const xmlChar *)"TX_DSC_ERR"
#define y_cli_mxp_N_TX_LOCK_ERR (const xmlChar *)"TX_LOCK_ERR"
#define y_cli_mxp_N_TX_LOF_ALM (const xmlChar *)"TX_LOF_ALM"
#define y_cli_mxp_N_TX_OOA (const xmlChar *)"TX_OOA"
#define y_cli_mxp_N_Temp (const xmlChar *)"Temp"
#define y_cli_mxp_N_Temp_c (const xmlChar *)"Temp_c"
#define y_cli_mxp_N_Transmit_Laser_running (const xmlChar *)"Transmit_Laser_running"
#define y_cli_mxp_N_Tx_CDR_Loss_of_Lock (const xmlChar *)"Tx_CDR_Loss_of_Lock"
#define y_cli_mxp_N_Tx_Power_dBm (const xmlChar *)"Tx_Power_dBm"
#define y_cli_mxp_N_board_humidity_state (const xmlChar *)"board_humidity_state"
#define y_cli_mxp_N_brctl_showstp_br0 (const xmlChar *)"brctl_showstp_br0"
#define y_cli_mxp_N_canal (const xmlChar *)"canal"
#define y_cli_mxp_N_cd_compensacion (const xmlChar *)"cd_compensacion"
#define y_cli_mxp_N_configuracion (const xmlChar *)"configuracion"
#define y_cli_mxp_N_device_boardId (const xmlChar *)"device_boardId"
#define y_cli_mxp_N_device_hwVersion (const xmlChar *)"device_hwVersion"
#define y_cli_mxp_N_device_manufacturer (const xmlChar *)"device_manufacturer"
#define y_cli_mxp_N_device_swVersion (const xmlChar *)"device_swVersion"
#define y_cli_mxp_N_edfa_output_power_config (const xmlChar *)"edfa_output_power_config"
#define y_cli_mxp_N_edfa_output_power_state (const xmlChar *)"edfa_output_power_state"
#define y_cli_mxp_N_fpga_temperature_state (const xmlChar *)"fpga_temperature_state"
#define y_cli_mxp_N_interrupt (const xmlChar *)"interrupt"		
#define y_cli_mxp_N_loss (const xmlChar *)"loss"
#define y_cli_mxp_N_mux_apply_config (const xmlChar *)"mux-apply-config"
#define y_cli_mxp_N_mux_config (const xmlChar *)"mux-config"
#define y_cli_mxp_N_mux_notify (const xmlChar *)"mux-notify"
#define y_cli_mxp_N_mux_notify_activate (const xmlChar *)"mux-notify-activate"
#define y_cli_mxp_N_mux_notify_deactivate (const xmlChar *)"mux-notify-deactivate"
#define y_cli_mxp_N_mux_optical_line_status (const xmlChar *)"mux-optical-line-status"
#define y_cli_mxp_N_mux_settings (const xmlChar *)"mux-settings"
#define y_cli_mxp_N_mux_state (const xmlChar *)"mux-state"
#define y_cli_mxp_N_mux_state_TX_RX_alarms (const xmlChar *)"mux-state-TX-RX-alarms"
#define y_cli_mxp_N_mux_state_XFP1 (const xmlChar *)"mux-state-XFP1"
#define y_cli_mxp_N_mux_state_XFP2 (const xmlChar *)"mux-state-XFP2"
#define y_cli_mxp_N_mux_state_XFP3 (const xmlChar *)"mux-state-XFP3"
#define y_cli_mxp_N_mux_state_XFP4 (const xmlChar *)"mux-state-XFP4"
#define y_cli_mxp_N_mux_state_dsp (const xmlChar *)"mux-state-dsp"
#define y_cli_mxp_N_mux_state_edfa (const xmlChar *)"mux-state-edfa"
#define y_cli_mxp_N_mux_state_misc (const xmlChar *)"mux-state-misc"
#define y_cli_mxp_N_mux_state_power (const xmlChar *)"mux-state-power"
#define y_cli_mxp_N_mux_state_temp_hum (const xmlChar *)"mux-state-temp-hum"
#define y_cli_mxp_N_neighbor (const xmlChar *)"neighbor"
#define y_cli_mxp_N_port (const xmlChar *)"port"
#define y_cli_mxp_N_port_neighbor (const xmlChar *)"port_neighbor"
#define y_cli_mxp_N_ports (const xmlChar *)"ports"
#define y_cli_mxp_N_potencia (const xmlChar *)"potencia"
#define y_cli_mxp_N_respuesta_mux_apply_config (const xmlChar *)"respuesta-mux-apply-config"
#define y_cli_mxp_N_respuesta_mux_settings (const xmlChar *)"respuesta-mux-settings"
#define y_cli_mxp_N_rx_laser_itu_band (const xmlChar *)"rx_laser_itu_band"
#define y_cli_mxp_N_rx_laser_itu_channel (const xmlChar *)"rx_laser_itu_channel"
#define y_cli_mxp_N_temp_around (const xmlChar *)"temp_around"
#define y_cli_mxp_N_temp_case (const xmlChar *)"temp_case"
#define y_cli_mxp_N_temp_rx_laser (const xmlChar *)"temp_rx_laser"
#define y_cli_mxp_N_temp_tx_laser (const xmlChar *)"temp_tx_laser"
#define y_cli_mxp_N_tipo_fec_cliente (const xmlChar *)"tipo_fec_cliente"
#define y_cli_mxp_N_tipo_fec_linea (const xmlChar *)"tipo_fec_linea"
#define y_cli_mxp_N_tipo_trafico (const xmlChar *)"tipo_trafico"
#define y_cli_mxp_N_tx_laser_itu_band (const xmlChar *)"tx_laser_itu_band"		
#define y_cli_mxp_N_tx_laser_itu_channel (const xmlChar *)"tx_laser_itu_channel"
#define y_cli_mxp_N_warning_config (const xmlChar *)"warning_config"
#define y_cli_mxp_N_xfp_rx_power (const xmlChar *)"xfp_rx_power"
#define y_cli_mxp_N_xfp_tx_power (const xmlChar *)"xfp_tx_power"

/* list /mux-config/ports */
typedef struct y_cli_mxp_T_mux_config_ports_ {
  dlq_hdr_t qhdr;
  int16 port;
  xmlChar *neighbor;
  xmlChar *port_neighbor;
} y_cli_mxp_T_mux_config_ports;


/* container /mux-config */
typedef struct y_cli_mxp_T_mux_config_ {
  xmlChar *configuracion;
  xmlChar *tipo_trafico;
  xmlChar *tipo_fec_linea;
  xmlChar *tipo_fec_cliente;
  xmlChar *canal;
  xmlChar *potencia;
  xmlChar *cd_compensacion;
  int64 edfa_output_power_config;
  int16 warning_config;
  dlq_hdr_t ports;
} y_cli_mxp_T_mux_config;

/* container /mux-state */
typedef struct y_cli_mxp_T_mux_state_ {

  /* revision OCTUBRE 2018 */
  xmlChar *device_manufacturer;		
  xmlChar *device_swVersion;		
  xmlChar *device_hwVersion;		
  xmlChar *device_boardId;
  /* revision OCTUBRE 2018 */

  int64 fpga_temperature_state;
  int16 board_humidity_state;
  int64 edfa_output_power_state;
  int64 xfp_tx_power;
  int64 xfp_rx_power;
} y_cli_mxp_T_mux_state;

/* container /mux-state-misc */
typedef struct y_cli_mxp_T_mux_state_misc_ {
  xmlChar *temp_around;
  xmlChar *temp_case;
  xmlChar *temp_tx_laser;
  xmlChar *temp_rx_laser;
  xmlChar *loss;
  xmlChar *interrupt;
  xmlChar *tx_laser_itu_band;
  xmlChar *tx_laser_itu_channel;
  xmlChar *rx_laser_itu_band;
  xmlChar *rx_laser_itu_channel;
} y_cli_mxp_T_mux_state_misc;

/* container /mux-state-TX-RX-alarms */
typedef struct y_cli_mxp_T_mux_state_TX_RX_alarms_ {
  xmlChar *EOL_ALM;
  xmlChar *MOD_TEMP_ALM;
  xmlChar *TX_OOA;
  xmlChar *TX_LOF_ALM;
  xmlChar *TX_DSC_ERR;
  xmlChar *LS_WAV_ALM;
  xmlChar *TX_ALM_INT;
  xmlChar *LS_BIAS_ALM;
  xmlChar *LS_TEMP_ALM;
  xmlChar *TX_LOCK_ERR;
  xmlChar *LS_POW_ALM;
  xmlChar *MOD_BIAS_ALM;
  xmlChar *LATCHED_TXFIFO_ERR;
  xmlChar *RXALM_INT;
  xmlChar *RXPOW_ALM;
  xmlChar *RX_LOS;
  xmlChar *RX_LOCK_ERR;
  xmlChar *RXS;
  xmlChar *PRBS_ERR_DET;
} y_cli_mxp_T_mux_state_TX_RX_alarms;

/* container /mux-state-power */
typedef struct y_cli_mxp_T_mux_state_power_ {
  xmlChar *PSUMMARY;
  xmlChar *P5VANALOG;
  xmlChar *N5V2ANALOG;
  xmlChar *P3P3VANALOG;
  xmlChar *P3P3VDIGITAL;
  xmlChar *LVDIGITAL;
  xmlChar *N5P2VDIGITAL;
} y_cli_mxp_T_mux_state_power;

/* container /mux-state-dsp */
typedef struct y_cli_mxp_T_mux_state_dsp_ {
  xmlChar *DSP_running;
  xmlChar *CONVERGED;
  xmlChar *MSE_below_threshold;
  xmlChar *BCD_Enabled;
  xmlChar *Coarse_Carrier_Lock;
  xmlChar *Collision;
  xmlChar *DSP_Initialized;
  xmlChar *Presence_of_light;
  xmlChar *Local_Oscillator_running;
  xmlChar *Transmit_Laser_running;
  xmlChar *MSE_XI;
  xmlChar *MSE_XQ;
  xmlChar *MSE_YI;
  xmlChar *MSE_YQ;
  xmlChar *BER_Estimate;
  xmlChar *Min_Bulk_CD_Compensation_ps_nm;
  xmlChar *Max_Bulk_CD_Compensation_ps_nm;
  xmlChar *Step_Size_ps_nm;
  xmlChar *CD_Compensation_ps_nm;
} y_cli_mxp_T_mux_state_dsp;

/* container /mux-state-edfa */
typedef struct y_cli_mxp_T_mux_state_edfa_ {
  xmlChar *POUT;
  xmlChar *PIN;
  xmlChar *Temp;
  xmlChar *LOS;
  xmlChar *LOP;
  xmlChar *Amp_stat;
} y_cli_mxp_T_mux_state_edfa;

/* container /mux-state-temp-hum */
typedef struct y_cli_mxp_T_mux_state_temp_hum_ {
  xmlChar *T41_Around;
  xmlChar *T41_TS0;
  xmlChar *T41_TS1;
  xmlChar *T41_TS2;
  xmlChar *FPGA;
  xmlChar *BOARD_TEMP;
  xmlChar *BOARD_HUM;
} y_cli_mxp_T_mux_state_temp_hum;

/* container /mux-state-XFP1 */
typedef struct y_cli_mxp_T_mux_state_XFP1_ {
  xmlChar *Presence;
  xmlChar *Loss;
  xmlChar *Ready;
  xmlChar *Interrupt;
  xmlChar *Tx_Power_dBm;
  xmlChar *Rx_Power_dBm;
  xmlChar *Temp_c;
  xmlChar *Low_Tx_Power_Alarm;
  xmlChar *High_Tx_Power_Alarm;
  xmlChar *Low_Rx_Power_Alarm;
  xmlChar *High_Rx_Power_Alarm;
  xmlChar *Rx_CDR_Loss_of_Lock;
  xmlChar *Tx_CDR_Loss_of_Lock;
  xmlChar *Laser_Fault;
} y_cli_mxp_T_mux_state_XFP1;

/* container /mux-state-XFP2 */
typedef struct y_cli_mxp_T_mux_state_XFP2_ {
  xmlChar *Presence;
  xmlChar *Loss;
  xmlChar *Ready;
  xmlChar *Interrupt;
  xmlChar *Tx_Power_dBm;
  xmlChar *Rx_Power_dBm;
  xmlChar *Temp_c;
  xmlChar *Low_Tx_Power_Alarm;
  xmlChar *High_Tx_Power_Alarm;
  xmlChar *Low_Rx_Power_Alarm;
  xmlChar *High_Rx_Power_Alarm;
  xmlChar *Rx_CDR_Loss_of_Lock;
  xmlChar *Tx_CDR_Loss_of_Lock;
  xmlChar *Laser_Fault;
} y_cli_mxp_T_mux_state_XFP2;

/* container /mux-state-XFP3 */
typedef struct y_cli_mxp_T_mux_state_XFP3_ {
  xmlChar *Presence;
  xmlChar *Loss;
  xmlChar *Ready;
  xmlChar *Interrupt;
  xmlChar *Tx_Power_dBm;
  xmlChar *Rx_Power_dBm;
  xmlChar *Temp_c;
  xmlChar *Low_Tx_Power_Alarm;
  xmlChar *High_Tx_Power_Alarm;
  xmlChar *Low_Rx_Power_Alarm;
  xmlChar *High_Rx_Power_Alarm;
  xmlChar *Rx_CDR_Loss_of_Lock;
  xmlChar *Tx_CDR_Loss_of_Lock;
  xmlChar *Laser_Fault;
} y_cli_mxp_T_mux_state_XFP3;

/* container /mux-state-XFP4 */
typedef struct y_cli_mxp_T_mux_state_XFP4_ {
  xmlChar *Presence;
  xmlChar *Loss;
  xmlChar *Ready;
  xmlChar *Interrupt;
  xmlChar *Tx_Power_dBm;
  xmlChar *Rx_Power_dBm;
  xmlChar *Temp_c;
  xmlChar *Low_Tx_Power_Alarm;
  xmlChar *High_Tx_Power_Alarm;
  xmlChar *Low_Rx_Power_Alarm;
  xmlChar *High_Rx_Power_Alarm;
  xmlChar *Rx_CDR_Loss_of_Lock;
  xmlChar *Tx_CDR_Loss_of_Lock;
  xmlChar *Laser_Fault;
} y_cli_mxp_T_mux_state_XFP4;

/* container /mux-optical-line-status */
typedef struct y_cli_mxp_T_mux_optical_line_status_ {
  xmlChar *brctl_showstp_br0;
} y_cli_mxp_T_mux_optical_line_status;

/* container /mux-notify-activate/input */
typedef struct y_cli_mxp_T_mux_notify_activate_input_ {
} y_cli_mxp_T_mux_notify_activate_input;

/* container /mux-notify-activate/output */
typedef struct y_cli_mxp_T_mux_notify_activate_output_ {
} y_cli_mxp_T_mux_notify_activate_output;

/* rpc /mux-notify-activate */
typedef struct y_cli_mxp_T_mux_notify_activate_ {
  y_cli_mxp_T_mux_notify_activate_input input;
  y_cli_mxp_T_mux_notify_activate_output output;
} y_cli_mxp_T_mux_notify_activate;

/* container /mux-notify-deactivate/input */
typedef struct y_cli_mxp_T_mux_notify_deactivate_input_ {
} y_cli_mxp_T_mux_notify_deactivate_input;

/* container /mux-notify-deactivate/output */
typedef struct y_cli_mxp_T_mux_notify_deactivate_output_ {
} y_cli_mxp_T_mux_notify_deactivate_output;

/* rpc /mux-notify-deactivate */
typedef struct y_cli_mxp_T_mux_notify_deactivate_ {
  y_cli_mxp_T_mux_notify_deactivate_input input;
  y_cli_mxp_T_mux_notify_deactivate_output output;
} y_cli_mxp_T_mux_notify_deactivate;

/* container /mux-apply-config/output */
typedef struct y_cli_mxp_T_mux_apply_config_output_ {
  xmlChar *respuesta_mux_apply_config;
} y_cli_mxp_T_mux_apply_config_output;

/* container /mux-apply-config/input */
typedef struct y_cli_mxp_T_mux_apply_config_input_ {
} y_cli_mxp_T_mux_apply_config_input;

/* rpc /mux-apply-config */
typedef struct y_cli_mxp_T_mux_apply_config_ {
  y_cli_mxp_T_mux_apply_config_output output;
  y_cli_mxp_T_mux_apply_config_input input;
} y_cli_mxp_T_mux_apply_config;

/* container /mux-settings/output */
typedef struct y_cli_mxp_T_mux_settings_output_ {
  xmlChar *respuesta_mux_settings;
} y_cli_mxp_T_mux_settings_output;

/* container /mux-settings/input */
typedef struct y_cli_mxp_T_mux_settings_input_ {
} y_cli_mxp_T_mux_settings_input;

/* rpc /mux-settings */
typedef struct y_cli_mxp_T_mux_settings_ {
  y_cli_mxp_T_mux_settings_output output;
  y_cli_mxp_T_mux_settings_input input;
} y_cli_mxp_T_mux_settings;

/* notification /mux-notify */
typedef struct y_cli_mxp_T_mux_notify_ {
  xmlChar *INFO;
} y_cli_mxp_T_mux_notify;


/********************************************************************
* FUNCTION y_cli_mxp_mux_notify_send
* 
* Send a y_cli_mxp_mux_notify notification
* Called by your code when notification event occurs
* 
********************************************************************/
extern void y_cli_mxp_mux_notify_send (
  const xmlChar *INFO);

/********************************************************************
* FUNCTION y_cli_mxp_init
* 
* initialize the cli-mxp server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_cli_mxp_init (
  const xmlChar *modname,
  const xmlChar *revision);

/********************************************************************
* FUNCTION y_cli_mxp_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_cli_mxp_init2 (void);

/********************************************************************
* FUNCTION y_cli_mxp_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_cli_mxp_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif