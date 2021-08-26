#include <wayland-client.h>
#include <wayland-egl.h>
#include <EGL/egl.h>
#include <GL/gl.h>
#include <string.h>
#include <stdio.h>

int wayland_init ();

#define WIDTH 256
#define HEIGHT 256

static struct wl_display *w_display;
static struct wl_compositor *compositor = NULL;
static struct wl_shell *shell = NULL;
static EGLDisplay egl_display;
static char running = 1;

struct window {
	EGLContext egl_context;
	struct wl_surface *surface;
	struct wl_shell_surface *shell_surface;
	struct wl_egl_window *egl_window;
	EGLSurface egl_surface;
};


