/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
/**@file api/cm/xml/code/cmx__snapshot.h
 *
 * Offers internal routines on a snapshot.
 */
#ifndef CMX__SNAPSHOT_H
#define CMX__SNAPSHOT_H

#include "c_typebase.h"
#include "c_iterator.h"
#include "v_kernel.h"

#if defined (__cplusplus)
extern "C" {
#endif
#include "cmx_snapshot.h"

/**
 * Frees all current reader and writer snapshots.
 */
void cmx_snapshotFreeAll();

/**
 * Resolves the snapshot kind.
 *
 * @param snapshot The snapshot where to resolve the kind of.
 * @return READERSNAPSHOT if it is a readerSnapshot or WRITERSNAPSHOT if it is
 *         a writerSnapshot.
 */
const c_char* cmx_snapshotKind(const c_char* snapshot);

#if defined (__cplusplus)
}
#endif

#endif /* CMX__SNAPSHOT_H */
