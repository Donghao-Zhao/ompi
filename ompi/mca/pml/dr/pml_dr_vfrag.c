/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */
                                                                                                                    
#include "ompi_config.h"
#include "pml_dr_vfrag.h"


static void mca_pml_dr_vfrag_construct(mca_pml_dr_vfrag_t* vfrag)
{
    vfrag->vf_send.pval = NULL;
    vfrag->vf_recv.pval = NULL;
    vfrag->vf_id = 0;
    vfrag->vf_idx = 0;
    vfrag->vf_len = 0; 
    vfrag->vf_offset = 0; 
    vfrag->vf_size = 0;
    vfrag->vf_max_send_size = 0;
    vfrag->vf_ack = 0;
    vfrag->vf_mask = 0;
    memset(&vfrag->vf_event, 0, sizeof(vfrag->vf_event));
}


static void mca_pml_dr_vfrag_destruct(mca_pml_dr_vfrag_t* vfrag)
{

}


OBJ_CLASS_INSTANCE(
    mca_pml_dr_vfrag_t,
    opal_list_item_t,
    mca_pml_dr_vfrag_construct,
    mca_pml_dr_vfrag_destruct
);



