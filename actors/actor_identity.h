/*
 * Copyright (c) 2016 Ericsson AB
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef ACTOR_IDENTITY_H
#define ACTOR_IDENTITY_H

#include "../common.h"
#include "../actor.h"

typedef struct state_identity_t {
    bool dump;
    list_t *managed_attributes;
} state_identity_t;

result_t actor_identity_init(actor_t **actor, char *obj_actor_state);
result_t actor_identity_set_state(actor_t **actor, char *obj_actor_state);
result_t actor_identity_fire(actor_t *actor);
void actor_identity_free(actor_t *actor);
char *actor_identity_serialize(actor_t *actor, char **buffer);
list_t *actor_identity_get_managed_attributes(actor_t *actor);

#endif /* ACTOR_IDENTITY_H */
