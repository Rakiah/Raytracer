#ifndef TYPEDEFS_H
#define TYPEDEFS_H

typedef struct s_core		t_core;
typedef struct s_scene		t_scene;
typedef struct s_object		t_object;
typedef struct s_material	t_material;
typedef struct s_light		t_light;
typedef struct s_texture	t_texture;
typedef struct s_ray		t_ray;
typedef struct s_ray_hit	t_ray_hit;
typedef struct s_camera		t_camera;
typedef int (*t_intersect)(t_ray *, t_object *, float *);
typedef t_vector3f (*t_normal)(t_ray *r, t_ray_hit *h);

#endif
