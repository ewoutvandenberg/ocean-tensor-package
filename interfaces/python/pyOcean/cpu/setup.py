# -------------------------------------------------------------------------
# Copyright 2018, IBM Corp.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# -------------------------------------------------------------------------

from distutils.core import setup, Extension
import sysconfig
import platform
import inspect
import sys
import os

def libname(name) :
   VERSION = "%d_%d" % (sys.version_info[0],sys.version_info[1])
   return "%s_v%s" % (name, VERSION)

def libso(name) :
   # Name mangle the library dependency (see https://www.python.org/dev/peps/pep-3149/)
   EXT= sysconfig.get_config_var('EXT_SUFFIX')
   if (EXT is None) : EXT = ".so"
   return "%s%s" % (libname(name), EXT)

# Define all directories
SYSTEM        = platform.system() + "_" + platform.uname()[-2]
WORKDIR       = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
OCEAN_ROOT    = os.path.normpath(os.path.join(WORKDIR, '..', '..', '..', '..'))
OCEAN_LIB     = os.path.normpath(os.path.join(OCEAN_ROOT,'lib',SYSTEM))
OCEAN_INCLUDE = os.path.normpath(os.path.join(OCEAN_ROOT,'include'))
NAME          = libname("pyOcean_cpu")

# Configuration
pyOceanModule = Extension(NAME,
                          libraries=['ocean','ocean_base'],
                          library_dirs = [OCEAN_LIB],
                          include_dirs = [OCEAN_INCLUDE],
                          sources=[name for name in os.listdir(WORKDIR) if name.endswith('.c')])

# Compile the extension
if (__name__ == "__main__") :
   setup(name=NAME, version="1.0", ext_modules=[pyOceanModule])

