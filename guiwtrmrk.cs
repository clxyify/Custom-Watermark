string Source = @"
print('this is just an example')
warn('hey btw this is the watermark')
warn('add some shit here idfk enjoy')
";

ExploitAPI API = new ExploitAPI();//Use an API

public async void LoadWatermark()//Using WRD for example
{
    API.LaunchExploit();
    await Task.Delay(5000);//Change this to the length of injection
    API.SendLuaScript(Source+"\n\nprint('made by clxyify - custom api watermarks')";
    if (Source == string.IsNullOrEmpty)
    {
        Source = "\nprint('made by clxyify - custom api watermarks')";
        API.SendLuaScript(Source);
    }
}
