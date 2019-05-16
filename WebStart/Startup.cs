using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(WebStart.Startup))]
namespace WebStart
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
