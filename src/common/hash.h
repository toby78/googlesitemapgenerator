// Copyright 2009 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This file defines a url hash function.

#ifndef COMMON_HASH_H__
#define COMMON_HASH_H__

#include "common/basictypes.h"

// Calculate finger print for given string.
// This function is mainly defined for URL like string.
// The collision rate is expected to be very low, and speed is fast.
uint64 FingerPrint(const char *s);

#endif  // COMMON_HASH_H__
