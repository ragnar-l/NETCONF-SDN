/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef XFP1SEVERITYTABLE_OIDS_H
#define XFP1SEVERITYTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table xfp1SeverityTable */
#define XFP1SEVERITYTABLE_OID              1,3,6,1,4,1,43484,1,1,3,5,1


#define COLUMN_XFP1SEVERITYINDEX         1
    
#define COLUMN_XFP1SEVERITYPRESENCE         2
#define COLUMN_XFP1SEVERITYPRESENCE_FLAG    (0x1 << 0)
    
#define COLUMN_XFP1SEVERITYRXLOSS         3
#define COLUMN_XFP1SEVERITYRXLOSS_FLAG    (0x1 << 1)
    
#define COLUMN_XFP1SEVERITYREADY         4
#define COLUMN_XFP1SEVERITYREADY_FLAG    (0x1 << 2)
    
#define COLUMN_XFP1SEVERITYTXPOWER         5
#define COLUMN_XFP1SEVERITYTXPOWER_FLAG    (0x1 << 3)
    
#define COLUMN_XFP1SEVERITYRXPOWER         6
#define COLUMN_XFP1SEVERITYRXPOWER_FLAG    (0x1 << 4)
    
#define COLUMN_XFP1SEVERITYTEMPERATURE         7
#define COLUMN_XFP1SEVERITYTEMPERATURE_FLAG    (0x1 << 5)
    
#define COLUMN_XFP1SEVERITYLOWTXPOWER         8
#define COLUMN_XFP1SEVERITYLOWTXPOWER_FLAG    (0x1 << 6)
    
#define COLUMN_XFP1SEVERITYHIGHTXPOWER         9
#define COLUMN_XFP1SEVERITYHIGHTXPOWER_FLAG    (0x1 << 7)
    
#define COLUMN_XFP1SEVERITYLOWRXPOWER         10
#define COLUMN_XFP1SEVERITYLOWRXPOWER_FLAG    (0x1 << 8)
    
#define COLUMN_XFP1SEVERITYHIGHRXPOWER         11
#define COLUMN_XFP1SEVERITYHIGHRXPOWER_FLAG    (0x1 << 9)
    
#define COLUMN_XFP1SEVERITYRXCDRLOSSOFLOCK         12
#define COLUMN_XFP1SEVERITYRXCDRLOSSOFLOCK_FLAG    (0x1 << 10)
    
#define COLUMN_XFP1SEVERITYTXCDRLOSSOFLOCK         13
#define COLUMN_XFP1SEVERITYTXCDRLOSSOFLOCK_FLAG    (0x1 << 11)
    
#define COLUMN_XFP1SEVERITYLASERFAULT         14
#define COLUMN_XFP1SEVERITYLASERFAULT_FLAG    (0x1 << 12)
    

#define XFP1SEVERITYTABLE_MIN_COL   COLUMN_XFP1SEVERITYPRESENCE
#define XFP1SEVERITYTABLE_MAX_COL   COLUMN_XFP1SEVERITYLASERFAULT
    

    /*
     * TODO:405:r: Review XFP1SEVERITYTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define XFP1SEVERITYTABLE_SETTABLE_COLS (COLUMN_XFP1SEVERITYPRESENCE_FLAG | COLUMN_XFP1SEVERITYRXLOSS_FLAG | COLUMN_XFP1SEVERITYREADY_FLAG | COLUMN_XFP1SEVERITYTXPOWER_FLAG | COLUMN_XFP1SEVERITYRXPOWER_FLAG | COLUMN_XFP1SEVERITYTEMPERATURE_FLAG | COLUMN_XFP1SEVERITYLOWTXPOWER_FLAG | COLUMN_XFP1SEVERITYHIGHTXPOWER_FLAG | COLUMN_XFP1SEVERITYLOWRXPOWER_FLAG | COLUMN_XFP1SEVERITYHIGHRXPOWER_FLAG | COLUMN_XFP1SEVERITYRXCDRLOSSOFLOCK_FLAG | COLUMN_XFP1SEVERITYTXCDRLOSSOFLOCK_FLAG | COLUMN_XFP1SEVERITYLASERFAULT_FLAG)

#ifdef __cplusplus
}
#endif

#endif /* XFP1SEVERITYTABLE_OIDS_H */
