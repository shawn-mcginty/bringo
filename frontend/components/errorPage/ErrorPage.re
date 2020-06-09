[@react.component]
let make = () =>
  <MaterialUi_WithStyles
    classes=[
      {
        name: "errorLogoContainer",
        styles: ReactDOMRe.Style.make(~textAlign="right", ()),
      },
      {
        name: "errorLogo",
        styles:
          ReactDOMRe.Style.make(~maxHeight="75px", ~maxWidth="60px", ()),
      },
      ...SharedClasses.classes,
    ]
    render={classes =>
      MaterialUi.(
        <section>
          <Container maxWidth=`Md>
            <Paper className=classes##pageTopMargin>
              <Grid container=true spacing=V4>
                <Grid item=true xs=`V4 className=classes##errorLogoContainer>
                  <img src="/icons/dead.svg" className=classes##errorLogo />
                </Grid>
                <Grid item=true xs=`V8>
                  <Typography variant=`H3>
                    {React.string("Oops!")}
                  </Typography>
                </Grid>
                <Grid item=true xs=`V2 />
                <Grid item=true xs=`V8>
                  <Typography variant=`Body1>
                    {React.string(
                       "It looks like something went wrong! Please wait a few minutes and try again.",
                     )}
                  </Typography>
                </Grid>
                <Grid item=true xs=`V2 />
              </Grid>
            </Paper>
          </Container>
        </section>
      )
    }
  />;