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

#ifndef __SOLID_MACROS_H__
#define __SOLID_MACROS_H__

#define SOLID_CONCAT_2B(A,B) A ## B
#define SOLID_CONCAT_2(A,B) SOLID_CONCAT_2B(A,B)

#define SOLID_CONCAT_3B(A,B,C) A ## B ## C
#define SOLID_CONCAT_3(A,B,C) SOLID_CONCAT_3B(A,B,C)

#define SOLID_CONCAT_4B(A,B,C,D) A ## B ## C ## D
#define SOLID_CONCAT_4(A,B,C,D) SOLID_CONCAT_4B(A,B,C,D)

#define SOLID_CONCAT_HYPHEN_2B(A,B) A ## _ ## B
#define SOLID_CONCAT_HYPHEN_2(A,B) SOLID_CONCAT_HYPHEN_2B(A,B)

#define SOLID_CONCAT_HYPHEN_3B(A,B,C) A ## _ ## B ## _ ## C
#define SOLID_CONCAT_HYPHEN_3(A,B,C) SOLID_CONCAT_HYPHEN_3B(A,B,C)

#define SOLID_CONCAT_HYPHEN_4B(A,B,C,D) A ## _ ## B ## _ ## C ## _ ## D
#define SOLID_CONCAT_HYPHEN_4(A,B,C,D) SOLID_CONCAT_HYPHEN_4B(A,B,C,D)

#endif
