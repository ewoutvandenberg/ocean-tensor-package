/* ------------------------------------------------------------------------ */
/* Copyright 2018, IBM Corp.                                                */
/*                                                                          */
/* Licensed under the Apache License, Version 2.0 (the "License");          */
/* you may not use this file except in compliance with the License.         */
/* You may obtain a copy of the License at                                  */
/*                                                                          */
/*    http://www.apache.org/licenses/LICENSE-2.0                            */
/*                                                                          */
/* Unless required by applicable law or agreed to in writing, software      */
/* distributed under the License is distributed on an "AS IS" BASIS,        */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and      */
/* limitations under the License.                                           */
/* ------------------------------------------------------------------------ */

#ifndef __OC_TENSOR_GPU_H__
#define __OC_TENSOR_GPU_H__

#include "ocean/core/interface/module_core.h"
#include "ocean/core/gpu/storage_gpu.h"
#include "ocean/core/gpu/device_gpu.h"


/* ===================================================================== */
/* Function declarations                                                 */
/* ===================================================================== */

/* Internal function to register tensor functions in the core module */
OC_API int OcRegisterTensorGPU(OcModuleCore *module);


/* Macros */
#define OcTensorGPU_cudaStream(TENSOR) OcStorageGPU_cudaStream((TENSOR) -> storage)

#endif
