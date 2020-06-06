[@react.component]
let make = (~classes) => {
  MaterialUi.(
    <Paper className={classes##pageTopMargin}>
      <form>
        <Grid
          container=true
          spacing=V4
          direction=`Column
          justify=`Center
          alignItems=`Center>
          <Grid item=true>
            <Typography variant=`H5>
              {React.string("Editor Login")}
            </Typography>
          </Grid>
          <Grid item=true>
            <FormControl fullWidth=true>
              <InputLabel htmlFor="uname-input">
                {React.string("Username")}
              </InputLabel>
              <Input
                id="uname-input"
                startAdornment={
                  <InputAdornment position=`Start>
                    <Icons.AccountCircleFilled />
                  </InputAdornment>
                }
              />
            </FormControl>
          </Grid>
          <Grid item=true>
            <FormControl>
              <InputLabel htmlFor="pdub-input">
                {React.string("Password")}
              </InputLabel>
              <Input
                id="pdub-input"
                type_="password"
                startAdornment={
                  <InputAdornment position=`Start>
                    <Icons.LockOpenFilled />
                  </InputAdornment>
                }
              />
            </FormControl>
          </Grid>
          <Grid item=true>
            <Button
              className={classes##buttonMargin}
              variant=`Contained
              color=`Primary>
              {React.string("Sign In")}
            </Button>
            <Button className={classes##buttonMargin} variant=`Contained>
              {React.string("Cancel")}
            </Button>
          </Grid>
        </Grid>
      </form>
    </Paper>
  );
};