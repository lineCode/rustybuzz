/*
 * Copyright © 2009  Red Hat, Inc.
 * Copyright © 2012  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Red Hat Author(s): Behdad Esfahbod
 * Google Author(s): Behdad Esfahbod
 */

#ifndef RB_SHAPE_PLAN_H
#define RB_SHAPE_PLAN_H

#include "hb-common.h"
#include "hb-buffer.h"

RB_BEGIN_DECLS

typedef struct rb_aat_map_t rb_aat_map_t;
typedef struct rb_shape_plan_t rb_shape_plan_t;

RB_EXTERN const rb_aat_map_t *rb_shape_plan_aat_map(const rb_shape_plan_t *plan);

RB_EXTERN rb_mask_t rb_shape_plan_kern_mask(const rb_shape_plan_t *plan);

RB_EXTERN rb_mask_t rb_shape_plan_trak_mask(const rb_shape_plan_t *plan);

RB_EXTERN rb_bool_t rb_shape_plan_requested_kerning(const rb_shape_plan_t *plan);

RB_END_DECLS

#endif /* RB_SHAPE_PLAN_H */