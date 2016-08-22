/* packet-coseventcomm.c
 *
 * $Id: packet-coseventcomm.c 42974 2012-06-01 15:57:05Z etxrab $
 *
 * Routines for IDL dissection
 *
 * Autogenerated from idl2wrs
 * Copyright 2001 Frank Singleton <frank.singleton@ericsson.com>
 */


/*
 * Wireshark - Network traffic analyzer
 * By Gerald Combs
 * Copyright 1999 - 2006 Gerald Combs
 */

static int hf_operationrequest = -1;/* Request_Operation field */


/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */


#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <gmodule.h>

#include <string.h>
#include <glib.h>
#include <epan/packet.h>
#include <epan/proto.h>
#include <epan/dissectors/packet-giop.h>


#ifdef _MSC_VER
/* disable warning: "unreference local variable" */
#pragma warning(disable:4101)
#endif


static proto_tree *start_dissecting(tvbuff_t *tvb, packet_info *pinfo, proto_tree *ptree, int *offset);



/* Struct prototype declaration Start */


/* Struct prototype declaration End */


/* Union prototype declaration Start */


/* Union prototype declaration End */



/* Initialise the protocol and subtree pointers */

static int proto_coseventcomm = -1;

static gint ett_coseventcomm = -1;


/* Initialise the initial Alignment */

static guint32  boundary = GIOP_HEADER_SIZE;  /* initial value */



/* Initialise the Registered fields */

/* TODO - Use registered fields */

/*
 * IDL Operations Start
 */
 
static const char CosEventComm_PushConsumer_push_op[] = "push" ;
static const char CosEventComm_PushConsumer_disconnect_push_consumer_op[] = "disconnect_push_consumer" ;
static const char CosEventComm_PushSupplier_disconnect_push_supplier_op[] = "disconnect_push_supplier" ;
static const char CosEventComm_PullSupplier_pull_op[] = "pull" ;
static const char CosEventComm_PullSupplier_try_pull_op[] = "try_pull" ;
static const char CosEventComm_PullSupplier_disconnect_pull_supplier_op[] = "disconnect_pull_supplier" ;
static const char CosEventComm_PullConsumer_disconnect_pull_consumer_op[] = "disconnect_pull_consumer" ;

/*
 * IDL Operations End
 */

/*  Begin Exception (containing members) String  Declare  */



/*  End Exception (containing members) String Declare  */

/*
 * IDL Attributes Start
 */
 

/*
 * IDL Attributes End
 */

/*
 * IDL Enums Start
 */
 
/*
 * IDL Enums End
 */
 
/*  Begin Exception Helper Functions  */



/*  End Exception Helper Functions  */

/*
 * Main delegator for exception handling
 *
 */

static gboolean decode_user_exception(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *ptree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    /*gboolean stream_is_big_endian _U_;*/                        /* big endianess */
    proto_tree *tree _U_;

    if (!header->exception_id)
        return FALSE;



    return FALSE;    /* user exception not found */

}

/*  Begin Attribute Helper Functions  */


/*  End Attribute Helper Functions  */

/*
 * IDL:omg.org/CosEventComm/PushConsumer/push:1.0
 */

static void decode_CosEventComm_PushConsumer_push(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        get_CDR_any(tvb,tree,offset,stream_is_big_endian, boundary, header);

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            /* Function returns void */

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PushConsumer/disconnect_push_consumer:1.0
 */

static void decode_CosEventComm_PushConsumer_disconnect_push_consumer(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            /* Function returns void */

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PushSupplier/disconnect_push_supplier:1.0
 */

static void decode_CosEventComm_PushSupplier_disconnect_push_supplier(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            /* Function returns void */

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PullSupplier/pull:1.0
 */

static void decode_CosEventComm_PullSupplier_pull(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            get_CDR_any(tvb,tree,offset,stream_is_big_endian, boundary, header);

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PullSupplier/try_pull:1.0
 */

static void decode_CosEventComm_PullSupplier_try_pull(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    guint8    u_octet1;
    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            get_CDR_any(tvb,tree,offset,stream_is_big_endian, boundary, header);

            u_octet1 = get_CDR_boolean(tvb,offset);
            if (tree) {
               proto_tree_add_text(tree,tvb,*offset-1,1,"has_event = %u",u_octet1);
            }

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PullSupplier/disconnect_pull_supplier:1.0
 */

static void decode_CosEventComm_PullSupplier_disconnect_pull_supplier(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            /* Function returns void */

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * IDL:omg.org/CosEventComm/PullConsumer/disconnect_pull_consumer:1.0
 */

static void decode_CosEventComm_PullConsumer_disconnect_pull_consumer(tvbuff_t *tvb _U_, packet_info *pinfo _U_, proto_tree *tree _U_, int *offset _U_, MessageHeader *header, gchar *operation _U_, gboolean stream_is_big_endian _U_) {

    
    /* Operation specific Variable declarations Begin */

    
    /* Operation specific Variable declarations End */

    
    switch(header->message_type) {

    case Request:

        break;

    case Reply:

        switch(header->rep_status) {

        case NO_EXCEPTION:

            /* Function returns void */

            break;

        case USER_EXCEPTION:

            break;

        default:

            /* Unknown Exception */

            g_warning("Unknown Exception ");

            break;

        
        }   /* switch(header->message_type) */

        break;

    default:

        /* Unknown GIOP Message */

        g_warning("Unknown GIOP Message");

        break;

    } /* switch(header->message_type) */

}

/*
 * Called once we accept the packet as being for us; it sets the
 * Protocol and Info columns and creates the top-level protocol
 * tree item.
 */
static proto_tree *start_dissecting(tvbuff_t *tvb, packet_info *pinfo, proto_tree *ptree, int *offset) {

    proto_item *ti = NULL;
    proto_tree *tree = NULL;            /* init later, inside if(tree) */

    col_set_str(pinfo->cinfo, COL_PROTOCOL, "COSEVENTCOMM");

    /*
     * Do not clear COL_INFO, as nothing is being written there by
     * this dissector yet. So leave it as is from the GIOP dissector.
     * TODO: add something useful to COL_INFO
     *     col_clear(pinfo->cinfo, COL_INFO);
     */

    if (ptree) {
        ti = proto_tree_add_item(ptree, proto_coseventcomm, tvb, *offset, -1, ENC_NA);
        tree = proto_item_add_subtree(ti, ett_coseventcomm);
    }
    return tree;
}

static gboolean dissect_coseventcomm(tvbuff_t *tvb, packet_info *pinfo, proto_tree *ptree, int *offset, MessageHeader *header, gchar *operation, gchar *idlname) {

    gboolean stream_is_big_endian;                        /* big endianess */
    proto_tree *tree _U_;
#define process_RequestOperation(){ \
		proto_item *pi; \
     	if(header->message_type == Reply){ col_append_fstr(pinfo->cinfo, COL_INFO, " op = %s",operation); }; /* fill-up info column */ \
	    pi=proto_tree_add_string_format_value(ptree,hf_operationrequest,tvb,0,0,operation," %s",operation);PROTO_ITEM_SET_GENERATED(pi); /* fill-up the field */ \
   };

    stream_is_big_endian = is_big_endian(header);         /* get endianess  */

    /* If we have a USER Exception, then decode it and return */

    if ((header->message_type == Reply) && (header->rep_status == USER_EXCEPTION)) {

       return decode_user_exception(tvb, pinfo, ptree, offset, header, operation, stream_is_big_endian);

    }

    switch(header->message_type) {

    case Request:
    case Reply:

        if (strcmp(operation, CosEventComm_PushConsumer_push_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PushConsumer") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PushConsumer_push(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PushConsumer_disconnect_push_consumer_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PushConsumer") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PushConsumer_disconnect_push_consumer(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PushSupplier_disconnect_push_supplier_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PushSupplier") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PushSupplier_disconnect_push_supplier(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PullSupplier_pull_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PullSupplier") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PullSupplier_pull(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PullSupplier_try_pull_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PullSupplier") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PullSupplier_try_pull(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PullSupplier_disconnect_pull_supplier_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PullSupplier") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PullSupplier_disconnect_pull_supplier(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        if (strcmp(operation, CosEventComm_PullConsumer_disconnect_pull_consumer_op) == 0
            && (!idlname || strcmp(idlname, "CosEventComm/PullConsumer") == 0)) {
           process_RequestOperation();  /* fill-up Request_Operation field & info column */
           tree = start_dissecting(tvb, pinfo, ptree, offset);
           decode_CosEventComm_PullConsumer_disconnect_pull_consumer(tvb, pinfo, tree, offset, header, operation, stream_is_big_endian);
           return TRUE;
        }

        
        break;

    case CancelRequest:
    case LocateRequest:
    case LocateReply:
    case CloseConnection:
    case MessageError:
    case Fragment:
       return FALSE;      /* not handled yet */

    default:
       return FALSE;      /* not handled yet */

    }   /* switch */


    return FALSE;

}  /* End of main dissector  */



/* Register the protocol with Wireshark */

void proto_register_giop_coseventcomm(void) {

   /* setup list of header fields */

   static hf_register_info hf[] = {
        /* field that indicates the currently ongoing request/reply exchange */
		{&hf_operationrequest, {"Request_Operation","COSEVENTCOMM.Request_Operation",FT_STRING,BASE_NONE,NULL,0x0,NULL,HFILL}},

      /* no fields yet */

   };

   /* setup protocol subtree array */

   static gint *ett[] = {
      &ett_coseventcomm,
   };

   /* Register the protocol name and description */

   proto_coseventcomm = proto_register_protocol("Coseventcomm Dissector Using GIOP API" , "COSEVENTCOMM", "giop-coseventcomm" );

   proto_register_field_array(proto_coseventcomm, hf, array_length(hf));

   proto_register_subtree_array(ett,array_length(ett));

}


/* register me as handler for these interfaces */

void proto_reg_handoff_giop_coseventcomm(void) {


    
    /* Register for Explicit Dissection */

    register_giop_user_module(dissect_coseventcomm, "COSEVENTCOMM", "CosEventComm/PullConsumer", proto_coseventcomm );     /* explicit dissector */

    
    /* Register for Explicit Dissection */

    register_giop_user_module(dissect_coseventcomm, "COSEVENTCOMM", "CosEventComm/PullSupplier", proto_coseventcomm );     /* explicit dissector */

    
    /* Register for Explicit Dissection */

    register_giop_user_module(dissect_coseventcomm, "COSEVENTCOMM", "CosEventComm/PushConsumer", proto_coseventcomm );     /* explicit dissector */

    
    /* Register for Explicit Dissection */

    register_giop_user_module(dissect_coseventcomm, "COSEVENTCOMM", "CosEventComm/PushSupplier", proto_coseventcomm );     /* explicit dissector */

    
    /* Register for Heuristic Dissection */

    register_giop_user(dissect_coseventcomm, "COSEVENTCOMM" ,proto_coseventcomm);     /* heuristic dissector */


}


