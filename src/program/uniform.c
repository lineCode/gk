/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "uniform.h"
#include "uniform_cache.h"

GK_EXPORT
void
gkUniform1i(GkProgInfo * __restrict pinfo,
            const char * __restrict name,
            GLint                   val) {
  glUniform1i(gkUniformLoc(pinfo, name), val);
}