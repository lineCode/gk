/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "gk_def_effect.h"

GkColor gkdef_clr__blk = { 0.0, 0.0, 0.0, 1.0 };
GkColor gkdef_clr__wht = { 0.0, 0.0, 0.0, 1.0 };

GkColorOrTex gkdef_clr_blk = { .val    = &gkdef_clr__blk,
                               .method = GK_COLOR_COLOR };
GkColorOrTex gkdef_clr_wht = { .val    = &gkdef_clr__wht,
                               .method = GK_COLOR_COLOR };

GkPhong gkdef_phong = {
  .base = {
    .type       = GK_MATERIAL_PHONG,
    .subroutine = "phong"
  },
  .emission          = NULL,
  .ambient           = NULL,
  .diffuse           = &gkdef_clr_wht,
  .specular          = &gkdef_clr_wht,
  .reflective        = NULL,
  .transparent       = NULL,
  .shininess         = 1.0,
  .reflectivity      = 1.0,
  .transparency      = 0.0,
  .indexOfRefraction = 1.0
};

GkBlinn gkdef_blinn = {
  .base = {
    .type       = GK_MATERIAL_BLINN,
    .subroutine = "blinn"
  },
  .emission          = NULL,
  .ambient           = NULL,
  .diffuse           = &gkdef_clr_wht,
  .specular          = &gkdef_clr_wht,
  .reflective        = NULL,
  .transparent       = NULL,
  .shininess         = 1.0,
  .reflectivity      = 1.0,
  .transparency      = 0.0,
  .indexOfRefraction = 1.0
};

GkLambert gkdef_lambert = {
  .base = {
    .type       = GK_MATERIAL_LAMBERT,
    .subroutine = "lambert"
  },
  .emission          = NULL,
  .ambient           = NULL,
  .diffuse           = &gkdef_clr_wht,
  .reflective        = NULL,
  .transparent       = NULL,
  .reflectivity      = 1.0,
  .transparency      = 0.0,
  .indexOfRefraction = 1.0
};

GkConstant gkdef_constant = {
  .base = {
    .type       = GK_MATERIAL_CONSTANT,
    .subroutine = "constant"
  },
  .emission          = NULL,
  .reflective        = NULL,
  .transparent       = NULL,
  .reflectivity      = 1.0,
  .transparency      = 0.0,
  .indexOfRefraction = 1.0
};

GkPhong*
gk_def_material_phong() {
  return &gkdef_phong;
}

GkBlinn*
gk_def_material_blinn() {
  return &gkdef_blinn;
}

GkLambert*
gk_def_material_lambert() {
  return &gkdef_lambert;
}

GkConstant*
gk_def_material_constant() {
  return &gkdef_constant;
}

GkMaterial gkdef_material = {
  .technique = &gkdef_phong.base,
  .isvalid   = 1,
  .enabled   = 1
};

GkMaterial*
gk_def_material() {
  return &gkdef_material;
}
