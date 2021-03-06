/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "common.h"
#include "model.h"
#include <ds/rb.h>

void
gk_model_add(GkContext * __restrict ctx,
             GkModel   * __restrict model,
             void      * __restrict source) {
  rb_insert(ctx->mdltree, source, model);
}

GkModel*
gk_model_find(GkContext * __restrict ctx,
              void      * __restrict source) {
  return rb_find(ctx->mdltree, source);
}
